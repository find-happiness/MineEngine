/*!
 * \file InputClass.h
 * \date 2015/07/07 17:10
 *
 * \author song
 * Contact: w564263331@gmail.com
 *
 * \brief 
 *
 * TODO: long description
 *
 * \note
*/
#pragma once
class InputClass
{
public:
	InputClass();
	~InputClass();
	InputClass(const InputClass& ic);
	void Initialize();

	void KeyDown(unsigned int);
	void KeyUp(unsigned int);

	bool IsKeyDown(unsigned int);

private:
	bool m_keys[256];
};
