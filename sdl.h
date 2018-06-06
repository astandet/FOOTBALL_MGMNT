#ifndef SDL_H_
#define SDL_H_

SDL_Window* window=NULL;
SDL_Surface* WindowSurface=NULL;
SDL_Surface* s_media=NULL;

bool init()
{
	bool success=true;
	if(SDL_Init(SDL_INIT_VIDEO)<0)
	{
		success=false;
		printf("%s\n", SDL_GetError());
	}
	window=SDL_CreateWindow("Welcome to Football World!", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 460, SDL_WINDOW_SHOWN);
	if(window==NULL)
	{
		success=false;
		printf("%s\n", SDL_GetError());
	}
	WindowSurface=SDL_GetWindowSurface(window);
	return success;
}

bool LoadMedia()
{
	bool success=true;
	s_media=SDL_LoadBMP("MEDIA/logo.bmp");
	if(s_media==NULL)
	{
		success=false;
		printf("%s\n", SDL_GetError());
	}
	return success;
}

void close()
{
	SDL_FreeSurface(WindowSurface);
	WindowSurface=NULL;
	SDL_DestroyWindow(window);
	window=NULL;
	SDL_Quit();
}

#endif /* SDL_H_ */
