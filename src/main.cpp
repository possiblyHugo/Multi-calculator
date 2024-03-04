#include <iostream>
#include <vector>
#include <string>

int main() 
{
	int calculator_selection = 0;
	
	std::vector<std::string> calculator_list = {
		// Fractions
		"Fraction Addition"
	};

	std::cout << "This program is meant to serve as a multi-purpose calculator that helps with understanding the step by step solving process of problems." << std::endl;

	for (int i = 0; i < calculator_list.size(); i++) {
		std::cout << i + 1 << " " << calculator_list[i] << "\n";
	}

	std::cout << "Please select the calculator from the list: ";
	
	while (true) {
		std::cin >> calculator_selection;

		if (calculator_selection <= 0 || calculator_selection > calculator_list.size()) {
			std::cout << "invalid input, please try again.\n";
		}
		else {
			break;
		}

	}
	


	return 0;
}