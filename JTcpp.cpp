// GroupProjectCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

	double Item_cost;
	int no_of_years;

	int count;

	double inflation_in_percent;

	double Adjusted_price;



	//<< "This program tells you the expected cost of an item\n"
	//<< "in a specified number of years with 5 % inflatio rate\n";

	std::cout << "please enter cost of item";
	std::cin >> Item_cost;


	std::cout << "please enter number of years";
	std::cin >> no_of_years;

	std::cout << "please enter rate of inflation";

	std::cin >> inflation_in_percent;

	double inflation_in_fraction = inflation_in_percent / 100;


	for (int i = 1; i <= no_of_years; i++) {

		Adjusted_price = Item_cost * inflation_in_fraction + Item_cost;

	}

	/*
	while(Price_adjusted == 0)
	{
		price_adjusted = Item_cost + Item_cost * inflation_rate;
		count++;
	}
	*/


	std::cout << "your adjusted price will be $" << Adjusted_price;

	// std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file