#pragma once
/*iufyuffy*/
#include <SDL.h>
#include <stdio.h>

#include"CSurface.h"
#include "CEvent.h"

//Screen dimension constants
const int SCREEN_WIDTH = 600;
const int SCREEN_HEIGHT = 600;

//Button dimension constants
const int BTN_WIDTH = 200;
const int BTN_HEIGHT = 50;

//Alert dimension constants
const int ALERT_WIDTH = 450;
const int ALERT_HEIGHT = 200;

//Hour dimension constants
const int H_WIDTH = 250;
const int H_HEIGHT = 100;

//Next feed hour dimension constants
const int HPRISE_WIDTH = 150;
const int HPRISE_HEIGHT = 100;


class CApp : public CEvent {
private:
    bool    Running;

    //The window we'll be rendering to
    SDL_Window* Window;

    //Surface of the different element
    SDL_Surface* Background;
    SDL_Surface* Surf_Alert;
    SDL_Surface* Surf_BTNprise;
    SDL_Surface* Surf_BTNcourse;
    SDL_Surface* Surf_heure;
    SDL_Surface* Surf_prise;


public:

    CApp();

    int OnExecute();

    bool OnInit();

    void OnEvent(SDL_Event* Event);

    void OnLButtonDown(int mX, int mY);

    void OnExit();

    void OnLoop();

    void OnRender();

    void OnCleanup();

    //The surface contained by the window
    SDL_Surface* ScreenSurface;
};

