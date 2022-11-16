#include "CApp.h"

void CApp::OnRender() {
	CSurface::OnDraw(ScreenSurface, Background, 0, 0);

	CSurface::OnDraw(ScreenSurface, Surf_Alert, 75, 200);


	CSurface::OnDraw(ScreenSurface, Surf_heure, 75, 50);

	CSurface::OnDraw(ScreenSurface, Surf_prise, 375, 50);

	//render button
	
	Button[0].render("btnprise.png",Window,ScreenSurface,Surf_BTNprise,Button[0].mPosition.x, Button[0].mPosition.y);
	Button[1].render("btncourse.png", Window, ScreenSurface, Surf_BTNcourse, Button[1].mPosition.x, Button[1].mPosition.y);
	
	SDL_UpdateWindowSurface(Window);
}