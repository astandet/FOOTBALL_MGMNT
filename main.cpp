#include <stdio.h>
#include <SDL.h>
#include "Player.h"

using namespace std;

//SDL_Surface* binvam=NULL;
//SDL_Window* windeg=NULL;

void pirdek(const Player* paramparam)
{
	cout<<paramparam->speed;
	//paramparam->speed=13; * not allowed!
}

int main(int argc, char* argv[])
{
	if(SDL_Init(SDL_INIT_VIDEO)==-1)
	{
		printf("%s\n",SDL_GetError());
		return 1;
	}
	SDL_Window* windeg=SDL_CreateWindow("Immersion_MGMNT", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 460, SDL_WINDOW_SHOWN);
	SDL_Surface* binvam=SDL_GetWindowSurface(windeg);
	SDL_FillRect(binvam,NULL,SDL_MapRGB(binvam->format,0xFF,0x00,0x00));
	SDL_UpdateWindowSurface(windeg);
	SDL_Delay(5000);

	Player Player1;
	Player1.name="Ian";
	Player1.mood=Ok;
	Player1.condition=63;
	Player1.pos=midfielder;
	Player1.speed=19;
	cout<<"Initial condition: "<<Player1.condition<<endl;
	cout<<"Initial morale: "<<moraleString(Player1.mood)<<endl;
	Player1.beforematch();
	cout<<"Condition before the match: "<<Player1.condition<<endl;
	cout<<"Morale before the match: "<<moraleString(Player1.mood)<<endl;
	cout<<"Player 1: Please introduce yourself\n";
	Player1.introduceYourself();
	Player1.afterLOSTmatch();
	cout<<"Condition after lost match: "<<Player1.condition<<endl;
	cout<<"Morale after lost match: "<<moraleString(Player1.mood)<<endl;
	Player1.afterWONmatch();
	cout<<"Condition after won match: "<<Player1.condition<<endl;
	cout<<"Morale after won match: "<<moraleString(Player1.mood)<<endl;


	Player* hist=new Player;
	cout<<"And now bloody watch this!"<<endl;
	pirdek(hist);
	cout<<endl<<"And now Ian's time!"<<endl;
	Player* zebi=&Player1;
	pirdek(zebi);
	cout<<endl;
	pirdek(zebi);
	//testing commiting github changes

	SDL_Quit();

	return 0;
}
