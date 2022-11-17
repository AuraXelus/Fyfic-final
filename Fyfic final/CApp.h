#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <string>
#include <SDL_ttf.h>

#include"CSurface.h"
#include "CEvent.h"
#include "CButton.h"

//Screen dimension constants
const int SCREEN_WIDTH = 600;
const int SCREEN_HEIGHT = 600;


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

    void OnKeyPress();

    void OnExit();

    void OnLoop();

    void OnRender();

    void OnCleanup();

    //The surface contained by the window
    SDL_Surface* ScreenSurface;
};

