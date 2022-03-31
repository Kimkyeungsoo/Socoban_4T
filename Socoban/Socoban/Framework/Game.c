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
	// Game Loop ��� ���ӿ� �ִ�
	// �÷��̾��� �Է��� �ϵ����� �и���Ų��.
	// https://gameprogrammingpatterns.com/game-loop.html

	// Game Loop�� ��ü�� Frame�̶�� �θ���.
	while (true)
	{
		// �Է� ó��
		processInput();
		// ������Ʈ
		update();
		// ������
		render(); 
	}
}