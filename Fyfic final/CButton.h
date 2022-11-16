#pragma once
#include <SDL_image.h>

#include "CApp.h"

//Button dimension constants
const int BTN_WIDTH = 200;
const int BTN_HEIGHT = 50;


class CButton
{
public:
	//Initializes internal variables
	CButton();

	//Sets top left position
	void setPosition(int x, int y);

	//handle event
	bool handleEvent(int x, int y);

	//Shows button sprite
	void render(const char* File, SDL_Window* window, SDL_Surface* Surf_dest, SDL_Surface* Surf_src,int x, int y);

	//Top left position
	SDL_Point mPosition;
	
};

