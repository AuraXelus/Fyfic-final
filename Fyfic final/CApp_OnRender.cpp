#include "CApp.h"

void CApp::OnRender() {
	CSurface::OnDraw(ScreenSurface, Background, 0, 0);

	CSurface::OnDraw(ScreenSurface, Surf_Alert, 75, 200);


	CSurface::OnDraw(ScreenSurface, Surf_heure, 75, 50);

	CSurface::OnDraw(ScreenSurface, Surf_prise, 375, 50);

	CSurface::OnDraw(ScreenSurface, Surf_BTNprise, 75, 450);

	CSurface::OnDraw(ScreenSurface, Surf_BTNcourse, 350, 450);
	//render button
	
	//button[0].render("btnprise.png",Window,ScreenSurface,Surf_BTNprise,button[0].mPosition.x, button[0].mPosition.y);
	//button[1].render("btncourse.png", Window, ScreenSurface, Surf_BTNcourse, button[1].mPosition.x, button[1].mPosition.y);
	
	SDL_UpdateWindowSurface(Window);
}