#include "stdafx.h"
#include "Game.h"

bool Initialize()
{
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