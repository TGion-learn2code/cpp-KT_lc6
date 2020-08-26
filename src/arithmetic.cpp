/*
 * arithmetic.cpp
 *
 *  Created on: Aug 26, 2020
 *      Author: tgion
 */

#include <vector>

#include "arithmetic.hpp"

//============================================================================
// Aufgabe 1
//============================================================================
double calcProduct(const std::vector<double>& vec) {
	double result = 1;

	for (auto vector_item : vec) {
		result *= vector_item;
	}

	return result;
}

double calcSum(const std::vector<double>& vec) {
	double result = 0;

	for (auto vector_item : vec) {
		result += vector_item;
	}

	return result;
}


