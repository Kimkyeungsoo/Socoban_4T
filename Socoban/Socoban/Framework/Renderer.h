#pragma once

#include <stdbool.h>

/// <summary>
/// �������� �ʱ�ȭ�Ѵ�
/// </summary>
/// <returns>�ʱ�ȭ �����̸� true, �ƴϸ� false</returns>
bool InitializeRenderer();

/// <summary>
/// ���� �׸���.
/// </summary>
/// <returns></returns>
void RenderMap();

// ��ư�Է� Ȯ�� �׽�Ʈ �ڵ�
void SetKeyMessage(int32_t keyCode);