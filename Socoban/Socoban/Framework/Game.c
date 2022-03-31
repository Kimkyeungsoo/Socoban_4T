#include "stdafx.h"
#include "Game.h"
#include "Renderer.h"
#include "Input.h"

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
	UpdateInput();
}

void update()
{
	if (GetButton(KEYCODE_W))
	{
		SetKeyMessage(KEYCODE_W);
	}
	else if (GetButton(KEYCODE_A))
	{
		SetKeyMessage(KEYCODE_A);
	}
	else if (GetButton(KEYCODE_S))
	{
		SetKeyMessage(KEYCODE_S);
	}
	else if (GetButton(KEYCODE_D))
	{
		SetKeyMessage(KEYCODE_D);
	}
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

	return 0;
}