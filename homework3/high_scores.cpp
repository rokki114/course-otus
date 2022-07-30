#include <iostream>
#include <fstream>
#include <string>
#include "pragma.hpp"

int high_scores (const int number_of_times, const std::string &user_name){

	const std::string high_scores_filename = "high scores.txt";
	{
		std::ofstream out_file{ high_scores_filename, std::ios_base::app };
		if (!out_file.is_open()) {
			std::cout << "Failed to open file for write: " << high_scores_filename << "!" << std::endl;
			return -1;
		}

		// Append new results to the table:
		out_file << user_name << ' ';
		out_file << number_of_times;
		out_file << std::endl;
	}

	{
		std::ifstream in_file{ high_scores_filename };
		if (!in_file.is_open()) {
			std::cout << "Failed to open file for read: " << high_scores_filename << "!" << std::endl;
			return -1;
		}

		std::cout << "High scores table:" << std::endl;
		std::string username=user_name;
		int high_score = number_of_times;
		
		while (true) {
			// Read the username first
			in_file >> username;
			// Read the high score next
			in_file >> high_score;
			// Ignore the end of line symbol
			in_file.ignore();

			if (in_file.fail()) {
				break;
			}

			// Print the information to the screen
			std::cout << user_name << '\t' << number_of_times << std::endl;
		}
	}

	return 0;
}
