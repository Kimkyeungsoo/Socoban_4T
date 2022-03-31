#include "stdafx.h"
#include "Game.h"
#include "Renderer.h"

#define MAP_SIZE 24

static char s_map[MAP_SIZE][MAP_SIZE] = {
	"*********",
	"*Sokoban*",
	"*********"
};

static HANDLE s_consoleHandle;

bool InitializeRenderer()
{
	s_consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);

	if (INVALID_HANDLE_VALUE == s_consoleHandle)
	{
		return false;
	}

	return true;
}

void RenderMap()
{
	// �ֿܼ��� map�� ���� ��ġ ����
	const static COORD initialPos = { 0, 0 };
	// Ŀ�� ������
	//info.dwSize = 100;
	// ���� �� ���� ǥ�� �� �� ����
	//info.bVisible = false;
	const static CONSOLE_CURSOR_INFO info = { 100, false };
	// �ܼ� Ŀ�� �������� �ű���
	SetConsoleCursorPosition(s_consoleHandle, initialPos);
	// Ŀ���� �����Ŀ�
	SetConsoleCursorInfo(s_consoleHandle, &info);
	// ���� ���
	for (int i = 0; i < MAP_SIZE; i++)
	{
		puts(s_map[i]);
	}
}