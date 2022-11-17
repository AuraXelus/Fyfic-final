#pragma once
#include <SDL.h>
#include <SDL_image.h>

#include "CApp.h"

//Permet de cgharger des image sur des surface et de les dessiner sur la surface d'une fenetre

class CSurface {
    public:
        CSurface();

    public:
        static SDL_Surface* OnLoad(const char* File, SDL_Window* window);

        //dessine la surface a un point précis
        static bool OnDraw(SDL_Surface* Surf_Dest, SDL_Surface* Surf_Src, int X, int Y);

        //dessine la surface a un point précis et une taille & largeur précise
        static bool OnDraw(SDL_Surface* Surf_Dest, SDL_Surface* Surf_Src, int X, int Y, int X2, int Y2, int W, int H);

        //rend transparent une couleur précise d'une surface
        static bool Transparent(SDL_Surface* Surf_Dest, int R, int G, int B);

    private:
        SDL_Surface* ScreenSurface = NULL;
};

