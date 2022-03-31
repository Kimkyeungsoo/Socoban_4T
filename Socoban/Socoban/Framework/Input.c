#include "stdafx.h"
#include "Input.h"

// Ű�� ���ȴٸ� true, ������ false
// ���� �������� Ű ����
static bool s_currentKeyStates[256] = { false };
// ���� �������� Ű ����
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