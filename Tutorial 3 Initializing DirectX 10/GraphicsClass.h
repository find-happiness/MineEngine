#pragma once

#include <Windows.h>

/////////////
// GLOBALS //
/////////////
const bool FULL_SCREEN = true;
const bool VSYNC_ENABLED = true;
const float SCREEN_DEPTH = 1000.0f;
const float SCREEN_NEAR = 0.1f;

class GraphicsClass
{
public:
	GraphicsClass();
	~GraphicsClass();
	GraphicsClass(const GraphicsClass& gc);
	bool Initialize(int width, int height, HWND hwnd);
	void Shutdown();
	bool Farme();
};

