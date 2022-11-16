#include "CApp.h"

void CApp::OnCleanup() {
	SDL_FreeSurface(Background);
	SDL_FreeSurface(Surf_Alert);
	SDL_FreeSurface(Surf_BTNcourse);
	SDL_FreeSurface(Surf_BTNprise);
	SDL_FreeSurface(Surf_prise);
	SDL_FreeSurface(Surf_heure);
	SDL_FreeSurface(ScreenSurface);
	SDL_Quit();
}