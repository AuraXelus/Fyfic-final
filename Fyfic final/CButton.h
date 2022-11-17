#pragma once
#include <SDL_image.h>

#include "CSurface.h"

// Classe INUTILE POUR LE MOMENTS tant que l'erreur avec la liste de boutons n'est pas résolu

//Button dimension constants
const int BTN_WIDTH = 200;
const int BTN_HEIGHT = 50;


const int TOTAL_BUTTONS = 3;

//CButton button[TOTAL_BUTTONS];

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

