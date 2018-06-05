#include "Player.h"

void Player::beforematch()
{
	mood=Low;
	condition=100;
}

void Player::retrainAsGoalkeeper()
{
	pos=goalkeeper;
}

void Player::afterWONmatch()
{
	condition=60;
	mood=Superb;
}

void Player::afterLOSTmatch()
{
	condition=60;
	//mood -2
	morale* moral=&mood;
	if((int)mood<=2) mood=Very_Low;
	else (mood=*(moral-2));
}

void Player::introduceYourself()
{
	cout<<"Hello, my name is "<<name<<endl;
}

Player::Player()
{
	mood=Ok;
	condition=50;
	pos=midfielder;
	speed=20;
}

string moraleString(morale mood)
{
	switch (mood)
	{
	case Very_Low:
		return "Very Low";
	case Low:
		return "Low";
	case Ok:
		return "Ok";
	case Good:
		return "Good";
	case Very_Good:
		return "Very Good";
	case Superb:
		return "Superb";
	default:
		return "Internal error";
	}
}
