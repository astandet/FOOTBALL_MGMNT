#include <stdio.h>
#include <SDL.h>
#include <pqxx/pqxx>
#include "Player.h"
#include "sdl.h"

extern SDL_Window* window;
extern SDL_Surface* WindowSurface;
extern SDL_Surface* s_media;
bool init();
bool LoadMedia();
void close();

int main(int argc, char* argv[])
{
	if(!init()) return 1;
	if(!LoadMedia()) return 1;
	SDL_FillRect(WindowSurface,NULL,SDL_MapRGB(WindowSurface->format,0x00,0x00,0xFF));
	SDL_BlitSurface(s_media,NULL,WindowSurface,NULL);
	SDL_UpdateWindowSurface(window);
	SDL_Delay(5000);
	close();
	return 0;
}
