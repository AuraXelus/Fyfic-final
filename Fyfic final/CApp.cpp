#include "CApp.h"

CApp::CApp() {
	Background = NULL;
	Surf_Alert = NULL;
	Surf_BTNprise = NULL;
	Surf_BTNcourse = NULL;
	Surf_heure = NULL;
	Surf_prise = NULL;

	ScreenSurface = NULL;
	Window = NULL;


	Running = true;
}

int CApp::OnExecute() {

	if (OnInit() == false) {
		return -1;
	}

	SDL_Event Event;

	while (Running) {
		while (SDL_PollEvent(&Event)) {
			OnEvent(&Event);
		}

		OnLoop();
		OnRender();
	}

	OnCleanup();

	return 0;
}

