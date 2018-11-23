#pragma once
// SDL Include
#include "Library\SDL2-2.0.8\include\SDL.h"
#include "Library\SDL2-2.0.8\include\SDL_opengl.h"
#include "Library/SDL2-2.0.8/include/SDL_thread.h"

#define WINDOW_WIDTH 1024
#define WINDOW_HEIGHT 512

/* Platform */
SDL_Window *win;
SDL_GLContext glContext;
int win_width, win_height;
int running = 1;