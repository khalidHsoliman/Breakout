#include "game.h"

game::game(GLuint width, GLuint height)
	: State(GAME_ACTIVE), Keys(), Width(width), Height(height)
{
}

game::~game()
{
}

void game::Init()
{
}

void game::ProcessInput(GLfloat dt)
{
}

void game::Update(GLfloat dt)
{
}

void game::	Render()
{
}
