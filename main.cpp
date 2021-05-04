#include "src/Player.h"

int main() {	
	std::string name;
	std::string job;
	std::cout << "Enter your name: " << std::endl;
	getline(std::cin, name);
	std::cout << "Enter your job title: " << std::endl;
	getline(std::cin, job);
	Player player(name, 1, job);
	std::cout << player;
	return 0;
}
