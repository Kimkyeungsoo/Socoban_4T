#pragma once

#include <stdint.h>

typedef enum KeyCode
{
	W = 'W',
	A = 'A',
	S = 'S',
	D = 'D'
} EKeyCode;

/// <summary>
/// �Է� ���¸� ������Ʈ �Ѵ�.
/// </summary>
void UpdateInput();

/// <summary>
/// ���� �����ӿ� ��ư�� ���ȴ��� üũ�Ѵ�.
/// </summary>
/// <param name="keyCode">���� Ű �ڵ�</param>
/// <return>���ȴٸ� true, �ƴϸ� false</return>
bool GetButtonDown(EKeyCode keyCode);

/// <summary>
/// ���� �����ӿ� ��ư�� �������� üũ�Ѵ�.
/// </summary>
/// <param name="keyCode">���� Ű �ڵ�</param>
/// <returns>�ôٸ� true, �ƴϸ� false</returns>
bool GetButtonUp(EKeyCode keyCode);

/// <summary>
/// ��ư�� ��� ���ȴ��� üũ�Ѵ�
/// </summary>
/// <param name="keyCode">���� Ű �ڵ�</param>
/// <returns>���ȴٸ� true, �ƴϸ� false</returns>
bool GetButton(EKeyCode keyCode);