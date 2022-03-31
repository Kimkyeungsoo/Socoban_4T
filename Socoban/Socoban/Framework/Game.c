#include "stdafx.h"
#include "Game.h"
#include "Renderer.h"

bool Initialize()
{
	if (false == InitializeRenderer())
	{
		return false;
	}
	return true;
}

void processInput()
{

}

void update()
{

}

void render()
{
	RenderMap();
}

int32_t Run()
{
	// Game Loop 모든 게임에 있다
	// 플레이어의 입력을 하드웨어랑 분리시킨다.
	// https://gameprogrammingpatterns.com/game-loop.html

	// Game Loop의 전체를 Frame이라고 부른다.
	while (true)
	{
		// 입력 처리
		processInput();
		// 업데이트
		update();
		// 렌더링
		render(); 
	}
}