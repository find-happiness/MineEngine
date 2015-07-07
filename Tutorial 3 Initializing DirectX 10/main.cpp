/*!
 * \class Main
 *
 * \ingroup GroupName
 *
 * \brief 
 *
 * TODO: long description
 *
 * \note 
 *
 * \author song
 *
 * \version 1.0
 *
 * \date ÆßÔÂ 2015
 *
 * Contact: w564263331@gmail.com
 *
 */

#include "SystemClass.h"

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,PSTR pScmdLine,int iCmdShow)
{
	
	SystemClass* system = nullptr;

	bool result;

	system = new SystemClass;

	if (!system)
		result = false;

	result = system->Initialize();

	if (result)
	{
		system->Run();
	}

	system->Shutdown();

	delete system;

	system = nullptr;

}

