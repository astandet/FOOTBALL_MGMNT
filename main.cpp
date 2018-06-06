#include <stdio.h>
#include <SDL.h>
#include <pqxx/pqxx>
#include <iostream>
#include <stdexcept>
#include "Player.h"
#include "sdl.h"

using namespace std;
using namespace pqxx;

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
	try
	{
		connection Conn("dbname=footballworld user=supermgr password=12345 hostaddr=127.0.0.1 port=5432");
		if(Conn.is_open())
		{
			cout<<"There you go, mate: "<<Conn.dbname()<<" opened for your enjoyment!"<<endl;
		}
		else
		{
			cout<<"Can't open database"<<endl;
			return 1;
		}

	Conn.disconnect();
	}
	catch(const std::exception &e)
	{
		cerr<<e.what()<<endl;
		return 1;
	}
	close();
	return 0;
}
