#include "CApp.h"

void CApp::OnRender() {
	CSurface::OnDraw(ScreenSurface, Surf_Test, 0, 0);

	CSurface::OnDraw(ScreenSurface, Surf_Test, 100, 100, 0, 0, 50, 50);

	SDL_UpdateWindowSurface(Window);
}