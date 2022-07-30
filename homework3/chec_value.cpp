#include <iostream>
#include "pragma.hpp"

int chec_value() {

	const int target_value = random_value();
	int current_value;
	bool not_win = true;
	int number_of_times=1;

	std::cout << "Enter your guess:" << std::endl;


	do {
		std::cin >> current_value;
		
		if (current_value < target_value) {
			std::cout << "less than " << current_value << std::endl;
		}
		else if (current_value > target_value) {
			std::cout << "greater than " << current_value << std::endl;
		}
		else {
			std::cout << "you win!" << std::endl;
			break;
		}
		number_of_times++;

	} while (not_win);




	return  number_of_times;
}