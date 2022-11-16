#include "CApp.h"

void CApp::OnEvent(SDL_Event* Event) {
	CEvent::OnEvent(Event);
}

void CApp::OnExit() {
	Running = false;
}

void CApp::OnLButtonDown(int mX, int mY) {
	for (int i = 0; i < TOTAL_BUTTONS; ++i)
	{
		/*if (Button[i].handleEvent(mX, mY)) {
			printf("click");
		}*/
	}
	
}