#include "stdafx.h"
#include "Input.h"

// 키가 눌렸다면 true, 뗐으면 false
// 현재 프레임의 키 상태
static bool s_currentKeyStates[256] = { false };
// 이전 프레임의 키 상태
static bool s_prevKeyStates[256] = { false };

void UpdateInput()
{

}

bool GetButtonDown(EKeyCode keyCode)
{
	if (false == s_prevKeyStates[keyCode] && s_currentKeyStates[keyCode])
	{
		return true;
	}
	else
	{ 
		return false;
	}
}

bool GetButtonUp(EKeyCode keyCode)
{
	if (s_prevKeyStates[keyCode] && false == s_currentKeyStates[keyCode])
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool GetButton(EKeyCode keyCode)
{
	if (s_prevKeyStates[keyCode] && s_currentKeyStates[keyCode])
	{
		return true;
	}
	else
	{
		return false;
	}
}