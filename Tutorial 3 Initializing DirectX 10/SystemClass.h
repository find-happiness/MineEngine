#pragma once

#include <Windows.h>

#include "InputClass.h"
#include "GraphicsClass.h"


class SystemClass
{
public:
	SystemClass();
	SystemClass(const SystemClass&);
	~SystemClass();
	bool Initialize();
	void Run();
	void Shutdown();
	LRESULT CALLBACK MessageHandler(HWND, UINT, WPARAM, LPARAM);
private:
	bool Frame();
	void ShutdownWindows();
	void InitializeWindows(int& height, int& width);

private:

	HINSTANCE m_hinstance;
	LPCWCH m_applicationName;

	InputClass* m_Input;
	GraphicsClass* m_GraphicsClass;

	HWND m_Hwnd;

};

static LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);

static SystemClass* ApplicationHandle = nullptr;

