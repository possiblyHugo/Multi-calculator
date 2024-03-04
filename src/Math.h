#pragma once
#include <map>
#include <functional>
#include <iostream>

class Math
{
public:

	Math()
	{
		calculator_list["Fraction Addition"] = [this]() {fraction_addition(); };
	}

	void test() {
		calculator_list["Fraction Addition"]();
	}

private:
	std::map<std::string, std::function<void()>> calculator_list;

	void fraction_addition() {
		std::cout << "Addition" << std::endl;
	}

};

