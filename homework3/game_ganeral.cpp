#include <iostream>
#include <string>
#include "pragma.hpp"

int main() {
	std::cout << "Hi! Enter your name, please:" << std::endl;
	std::string user_name;
	std::cin >> user_name;
	const int a = chec_value();
	high_scores ( a, user_name);

	return 0 ;
}