#include <iostream>
#include <fstream>
#include <string>
#include "pragma.hpp"

int high_scores (const int current_value, const std::string &user_name){
	const std::string high_scores_filename = "high scores.txt";

	std::ofstream out_file{ high_scores_filename, std::ios_base::app };
	if (!out_file.is_open()) {
		std::cout << "Failed to open file for write: " << high_scores_filename << "!" << std::endl;
		return -1;
	}

	// Append new results to the table:
	out_file << user_name << ' ';
	out_file << current_value;
	out_file << std::endl;
	return 0;
}