#pragma once

#include <GL/glew.h>
#include <GLFW/glfw3.h>


enum GameState
{
	GAME_ACTIVE,
	GAME_MENU,
	GAME_WIN
};


class game
{
public:

	GameState State; 
	GLboolean Keys[1024]; 
	GLuint Width, Height;

	game(GLuint width, GLuint height);
	~game();

	void Init(); 
	void ProcessInput(GLfloat dt); 
	void Update(GLfloat dt); 
	void Render();

};

