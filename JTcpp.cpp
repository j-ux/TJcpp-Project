// GroupProjectCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//testing visuaol studio github test
//Thiis some test 

/*
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

	
	while(Price_adjusted == 0)
	{
		price_adjusted = Item_cost + Item_cost * inflation_rate;
		count++;
	}
	


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

*/

#include <iostream>

int main()
{
	char user_input='Y';

	while (user_input == 'Y') {
		double weight_in_pounds;
		double height_in_inches;
		int age_in_years;
		//str m = male;
		//st f = female;
		double BMR = 0.0;
		//double BMR_m=0.0;
		char gender;

		//<< this program estimates the number of calories your body needs to maintain your weight without exercising\n>>

		std::cout << "Please enter your weight in pounds";
		std::cin >> weight_in_pounds;

		std::cout << "Please enter your height in inches";
		std::cin >> height_in_inches;

		std::cout << "Please enter your age in years";
		std::cin >> age_in_years;

		std::cout << "please enter your gender";
		std::cin >> gender;


		if (gender == 'm') {
			BMR = 66 + (3.3 * weight_in_pounds) + (12.9 * height_in_inches) - (6.8 * age_in_years);
		}
		else {
			BMR = 655 + (4.3 * weight_in_pounds) + (4.7 * height_in_inches) - (4.7 * age_in_years);
		}



		int number_of_chocolate_bars = BMR / 230;

		std::cout << "number of chocolate bars = " <<
			number_of_chocolate_bars;

		std::cout << "\n\nDo you want to continue Y or N = ";
		std::cin >> user_input;

	}
}