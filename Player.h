#ifndef PLAYER_H_
#define PLAYER_H_

#include <iostream>

using namespace std;

enum morale { Very_Low, Low, Ok, Good, Very_Good, Superb };
enum position { goalkeeper, defender, midfielder, attacker };

class Player
{

public:
	int condition;
	morale mood;
	int speed;
	position pos;
	string name;

	void beforematch();
	void retrainAsGoalkeeper();
	void afterWONmatch();
	void afterLOSTmatch();
	void introduceYourself();
	Player();
};

string moraleString(morale);

#endif /* PLAYER_H_ */
