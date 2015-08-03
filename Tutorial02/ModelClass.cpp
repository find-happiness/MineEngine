#include "ModelClass.h"


ModelClass::ModelClass()
{
	m_VertexCount = 0;
	m_IndexCount = 0;
}


ModelClass::~ModelClass()
{
}


ModelClass::ModelClass(const ModelClass& mc)
{
	m_VertexCount = 0;

	m_IndexCount = 0;

}


bool ModelClass::Initialize(ID3D10Device* device)
{
	bool result;

	result = InitializeBuffers(device);

	if (!result)
		return false;

	return true;
}


void ModelClass::Render(ID3D10Device* device)
{
}


void ModelClass::ShutDown()
{
}


bool ModelClass::InitializeBuffers(ID3D10Device* device)
{
	return false;
}


int ModelClass::GetIndexCount()
{
	return 0;
}


void ModelClass::ShutdownBuffers()
{
}


void ModelClass::RenderBuffers(ID3D10Device* device)
{
}
