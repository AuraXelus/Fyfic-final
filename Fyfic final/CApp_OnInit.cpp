#include "CApp.h"

bool CApp::OnInit()
{
	//Initialization flag
	bool success = true;

	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
		return false;
	}

	//Create window
	Window = SDL_CreateWindow("SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
	if (Window == NULL)
	{
		printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
		success = false;
	}
	else
	{
		//Initialize PNG loading
		int imgFlags = IMG_INIT_PNG;
		if (!(IMG_Init(imgFlags) & imgFlags))
		{
			printf("SDL_image could not initialize! SDL_image Error: %s\n", IMG_GetError());
			success = false;
		}
		else
		{
			//Get window surface
			ScreenSurface = SDL_GetWindowSurface(Window);
		}
		if ((Surf_BTNcourse = CSurface::OnLoad("btncourse.png", Window)) == NULL) {
			printf("btncourse fail");
			success = false;
		}
		if ((Surf_BTNprise = CSurface::OnLoad("btnprise.png", Window)) == NULL) {
			printf("btnprise fail");
			success = false;
		}
		if ((Surf_heure = CSurface::OnLoad("heure.png", Window)) == NULL) {
			printf("heure fail");
			success = false;
		}
		if ((Surf_prise = CSurface::OnLoad("nxtheure.png", Window)) == NULL) {
			printf("nxtheure fail");
			success = false;
		}
		if ((Surf_Alert = CSurface::OnLoad("alert.png", Window)) == NULL) {
			printf("alert fail");
			success = false;
		}
	}


	return success;
}