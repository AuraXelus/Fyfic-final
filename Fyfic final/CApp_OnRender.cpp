#include "CApp.h"

void CApp::OnRender() {
	CSurface::OnDraw(ScreenSurface, Background, 0, 0);

	CSurface::OnDraw(ScreenSurface, Surf_Alert, 75, 200);

	CSurface::OnDraw(ScreenSurface, Surf_BTNprise, 75, 450);

	CSurface::OnDraw(ScreenSurface, Surf_BTNcourse, 350, 450);

	CSurface::OnDraw(ScreenSurface, Surf_heure, 75, 50);

	CSurface::OnDraw(ScreenSurface, Surf_prise, 375, 50);

	SDL_UpdateWindowSurface(Window);
}