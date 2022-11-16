#include "CApp.h"

void CApp::OnCleanup() {
	SDL_FreeSurface(Surf_Test);
	SDL_FreeSurface(ScreenSurface);
	SDL_Quit();
}