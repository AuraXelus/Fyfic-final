#pragma once
#include <SDL.h>
#include <SDL_image.h>

#include "CApp.h"

class CSurface {
public:
    CSurface();

public:
    static SDL_Surface* OnLoad(const char* File, SDL_Window* window);

    static bool OnDraw(SDL_Surface* Surf_Dest, SDL_Surface* Surf_Src, int X, int Y);
    
    static bool OnDraw(SDL_Surface* Surf_Dest, SDL_Surface* Surf_Src, int X, int Y, int X2, int Y2, int W, int H);

    static bool Transparent(SDL_Surface* Surf_Dest, int R, int G, int B);

private:
    SDL_Surface* ScreenSurface = NULL;
};

