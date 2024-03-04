#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <map>
#include "Math.h"

using func = std::function<void()>;

int main() 
{
	Math calculator;
	calculator.test();
	int calculator_selection = 0;

	std::cout << "This program is meant to serve as a multi-purpose calculator that helps with understanding the step by step solving process of problems." << std::endl;

	std::cout << "Please select the calculator from the list: ";
	
	/*while (true) {
		std::cin >> calculator_selection;

		if (calculator_selection <= 0 || calculator_selection > calculator_list.size()) {
			std::cout << "invalid input, please try again.\n";
		}
		else {
			break;
		}

	}*/


	


	return 0;
}