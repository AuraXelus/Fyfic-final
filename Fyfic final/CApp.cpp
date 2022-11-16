#include "CApp.h"

CApp::CApp() {
	ScreenSurface = NULL;
	Surf_Test = NULL;
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

