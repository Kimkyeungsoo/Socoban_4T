#pragma once

#include <stdint.h>
#include <stdbool.h>

///<summary>
/// ���Ӱ� ���õ� �����͸� �ʱ�ȭ �Ѵ�.
///</summary>
/// <return>���������� �ʱ�ȭ ������ true, �ƴϸ� false</return>
bool Initialize();

///<summary>
/// ������ ���۽�Ų��.
///</summary>
/// <return>���������� ���� �ƴٸ� 0</return>
int32_t Run();