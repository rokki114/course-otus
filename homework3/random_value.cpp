#include <iostream>
#include <cstdlib>
#include <ctime>
#include "pragma.hpp"

int random_value() {

	const int max_value = 100;

	std::srand(std::time(nullptr)); 

	const int random_value = std::rand() % max_value;
	

	return random_value;
}