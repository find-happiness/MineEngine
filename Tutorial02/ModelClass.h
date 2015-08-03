#pragma once

#include <d3d10.h>

class ModelClass
{
public:
	ModelClass();
	~ModelClass();
	ModelClass(const ModelClass& mc);
	bool Initialize(ID3D10Device* device);
	void Render(ID3D10Device* device);
	void ShutDown();
private:
	bool InitializeBuffers(ID3D10Device* device);
public:
	int GetIndexCount();
private:
	void ShutdownBuffers();
	void RenderBuffers(ID3D10Device* device);
//	ID3D10Buffer* m_vertexBuffer;
	ID3D10Buffer* m_IndexBuffer;
	int m_VertexCount;
	int m_IndexCount;
	ID3D10Buffer* m_VertexBuffer;
};

