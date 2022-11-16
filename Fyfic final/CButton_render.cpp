#include "CButton.h"

void CButton::render(const char* File, SDL_Window* window, SDL_Surface* Surf_dest, SDL_Surface* Surf_src, int x, int y) {
	bool success = true;

	if ((Surf_src = CSurface::OnLoad(File, window)) == NULL) {
		printf(File);
		success = false;
	}
	/*CSurface::OnDraw(Surf_dest, Surf_src, 75, 450);*/
	CSurface::OnDraw(Surf_dest, Surf_src, x, y);
}