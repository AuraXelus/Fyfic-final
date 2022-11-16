#pragma once
/*iufyuffy*/
#include <SDL.h>
#include <stdio.h>

#include"CSurface.h"

//Screen dimension constants
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;


class CApp {
private:
    bool    Running;

    //The window we'll be rendering to
    SDL_Window* Window;

    //surface test
    SDL_Surface* Surf_Test;

public:

    CApp();

    int OnExecute();

    bool OnInit();

    void OnEvent(SDL_Event* Event);

    void OnLoop();

    void OnRender();

    void OnCleanup();

    //The surface contained by the window
    SDL_Surface* ScreenSurface;
};

