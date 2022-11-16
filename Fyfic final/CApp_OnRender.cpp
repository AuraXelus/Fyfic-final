#include "CApp.h"

void CApp::OnRender() {
	CSurface::OnDraw(ScreenSurface, Surf_Test, 0, 0);

	SDL_UpdateWindowSurface(Window);
}