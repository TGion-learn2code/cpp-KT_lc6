/*
 * input.cpp
 *
 *  Created on: Aug 26, 2020
 *      Author: tgion
 */

#include <iostream>

#include "input.hpp"

//============================================================================
// Aufgabe 1
//============================================================================
bool readNumbers(std::vector<double>& vec) {

	double userInput;

	if (std::cin >> userInput) {		// check if user input is double
		vec.push_back(userInput);	// if successfull save number to vector
		return true;
	}
	else {					// clear error state of cin
		std::cin.clear();
		std::cin.sync();
		return false;
	}
}


