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
	// 콘솔에서 map을 찍을 위치 설정
	const static COORD initialPos = { 0, 0 };
	// 커서 사이즈
	//info.dwSize = 100;
	// 숨길 것 인지 표출 할 것 인지
	//info.bVisible = false;
	const static CONSOLE_CURSOR_INFO info = { 100, false };
	// 콘솔 커서 포지션을 옮긴후
	SetConsoleCursorPosition(s_consoleHandle, initialPos);
	// 커서를 숨긴후에
	SetConsoleCursorInfo(s_consoleHandle, &info);
	// 맵을 출력
	for (int i = 0; i < MAP_SIZE; i++)
	{
		puts(s_map[i]);
	}
}