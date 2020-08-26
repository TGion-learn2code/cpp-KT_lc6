/*
 * input.hpp
 *
 *  Created on: Aug 26, 2020
 *      Author: tgion
 */

#ifndef INPUT_HPP_
#define INPUT_HPP_

#include <vector>

//============================================================================
// Aufgabe 1
//============================================================================

/// @brief	reads doubles from user input (stdin)
///
/// @param	vec std::vector<double>& vector to safe the user input
/// @return	true if successfull, false otherwise
///
bool readNumbers(std::vector<double>& vec);

#endif /* INPUT_HPP_ */
