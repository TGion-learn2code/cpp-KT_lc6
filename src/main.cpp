//============================================================================
// Name        : cpp-KT_lc6.cpp
// Author      : Tobias Gion <tgion>
// Version     :
// Copyright   : Your copyright notice
// Description : KT Übungsblatt LC6 - Modularisierung und Makros
//============================================================================

#define SHOW_ALL_VEC for (auto vector_item : vecDoubles) {std::cout << vector_item << " ";}

#include <iostream>

#include "arithmetic.hpp"
#include "input.hpp"

int main() {

	std::vector<double> vecDoubles;

	std::cout << "<<< Berechnung von Summe und Produkt beliebig vieler Fließkommazahlen >>>" << std::endl;
	std::cout << std::endl;
	std::cout << "Geben Sie beliebig viele Fließkommazahlen ein. " << std::endl;
	std::cout << "Buchstaben beenden die Eingabe und berechnen die Summe und das Produkt." << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	do {
		std::cout << "Zahl eingeben: ";
	} while (readNumbers(vecDoubles));

	std::cout << "Folgende Zahlen wurden eingegeben:" << std::endl;
	SHOW_ALL_VEC

	/*for (auto vector_item : vecDoubles) {
		std::cout << vector_item << " ";
	}*/

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Die Summe aller Zahlen ist: " << calcSum(vecDoubles) << std::endl;
	std::cout << "Das Produkt aller Zahlen ist: " << calcProduct(vecDoubles) << std::endl;

	return 0;
}
