#include "Player.h"

Player::Player() : name{"Nick Scott"}, level {1}, job { "Software Engineer"} {}

Player::Player(std::string name, int level, std::string job) :
	name{name}, level{level}, job{job} {}

Player::~Player() {}

std::ostream& operator<<(std::ostream& os, const Player& player) {
	os << "Name:\t" << player.name << std::endl;
	os << "Level:\t" << player.level << std::endl;
	os << "Job:\t" << player.job << std::endl;
	return os;
}
