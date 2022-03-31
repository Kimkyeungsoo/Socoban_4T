#include "stdafx.h"
#include "Input.h"

// Ű�� ���ȴٸ� true, ������ false
// ���� �������� Ű ����
static bool s_currentKeyStates[256] = { false };
// ���� �������� Ű ����
static bool s_prevKeyStates[256] = { false };

bool isKeyDown(int32_t keyCode)
{
	// 1000 0000 0000 0000
	if (0x8000 & GetAsyncKeyState(keyCode))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void UpdateInput()
{
	memcpy(s_prevKeyStates, s_currentKeyStates, sizeof(s_prevKeyStates));

	for (int32_t keyCode = 0; keyCode < 256; keyCode++)
	{
		if (isKeyDown(keyCode))
		{
			s_currentKeyStates[keyCode] = true;
		}
		else
		{
			s_currentKeyStates[keyCode] = false;
		}
		// GetAsyncKeyState(keyCode);  ��ȯ�� = short
		// 3 ���� ���°� ��ȯ
		// 0x8000 => 0b 1000 0000 0000 0000 => ���� ����
		// 0x8001 => 0b 1000 0000 0000 0001 => ��� ���� ����
		// 0x0001 => ���̿� ���ȴµ� ������ ��
		// 0x0000 => �ƿ� �� ����
		// 1. ���� Ű�� ���ȴ��� => MSB(Most Significant bit)�� set(=1)
		// 2 .���� Ű�� �ȴ��ȴ��� => LSB(least Significant bit) = reset(=0)
		// 3. GetAsyncKeyState() ---- GetAsyncKeyState()
		//                         ^ �� ���̿� ���ȴ���		
	}
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