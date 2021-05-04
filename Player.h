#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>

class Player {
public:
	Player();
	~Player();
	friend std::ostream& operator<<(std::ostream &os, const Player &player);
private:
	std::string name;
	int level;
	std::string job;	
};
#endif
