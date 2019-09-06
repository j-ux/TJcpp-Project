// GroupProjectCPP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//testing visuaol studio github test
//Thiis some test 


#include <iostream>
#include <cmath>




void chp2Q7()
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


		



		std::cout << "your adjusted price will be $" << Adjusted_price;

		// std::cout << "Hello World!\n";
	


	

}


void chp4Q1() {

	double litres;
	double miles;

	std::cout << "please enter gasoline in litres";
	std::cin >> litres;

	double gallon = 3.78 * litres;
	
	std::cout << "please enter the miles";
	std::cin >> miles;

	double mpg = miles / gallon;

	std::cout << mpg;
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

 
void chp2Q13()
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



//A program to score the rock-paper-sissor game. Each of two users types in either P,R, or S.
//The program then announces the winner as the basis for determining the winner: 
//Paper covers Rock, Rock breaks Scissors, Scissors cut Paper, or Nobody Wins. 
//Program wil allow the users to use lowercase as well as uppercase letters.
//Program will include a loop that lets the user play again until user says he or she is done.

void chp3Q1()
{
	//heading on page
	std::cout << "LET'S PLAY! \n ROCK! PAPER! SISSORS!";
	std::cout << "REMEMBER!! \n lowercase r or uppercase R for ROCK\n";
	std::cout << "lowercase p or uppercase P for PAPER \n";
	std::cout << "lowercase s or uppercase S for SCISSOR \n";

	//Player identifier
	char player_one;
	char player_two;

	//Player One input box
	std::cout  << "Rock Paper or Sissors?\n";
	std::cin >> player_one;
	//Player Two input box
	std::cout  << "Rock Paper or Sissors?\n";
	std::cin >> player_two;

	//Output
	if (player_one == 'R' || player_one == 'r')
	{
		if (player_two == 'R' || player_two == 'r')
		{
			std::cout << "NOBODY WINS!!\n";
			std::cout << "DRAW!\n";
		}

		else if (player_two == 'P' || player_two == 'p')
		{
			std::cout << "PAPER COVERS ROCK!!\n";
			std::cout << "PLAYER TWO WINS!!\n";
		}


		else
		{
			std::cout << "ROCK BREAKS SCISSORS\n";
			std::cout << "PLAYER ONE WINS!!\n";
		}
		

	}

	else if (player_one == 'P' || player_one == 'p')
	{
		if (player_two == 'P' || player_two == 'p') {
			std::cout << "NOBODY WINS!!\n";
			std::cout << "DRAW!\n";
		}
		else if (player_two == 'S' || player_two == 's')
		{
			std::cout << "SCISSORS CUT PAPER!!\n";
			std::cout << "PLAYER TWO WINS!!\n";
		}
		else
		{
			std::cout << "ROCK BREAKS SCISSORS\n";
			std::cout << "PLAYER ONE WINS!!\n";
		}
	}
	

	else if (player_one == 'S' || player_one == 's')
	{
		if (player_two == 'S' || player_two == 's')
		{
			std::cout << "NOBODY WINS!!\n";
			std::cout << "DRAW!\n";
		}

		else if (player_two == 'R' || player_two == 'r')
		{
			std::cout << "ROCK BREAKS SCISSORS\n";
			std::cout << "PLAYER TWO WINS!!\n";
		}

		else
		{
			std::cout << "PAPER COVERS ROCK!!\n";
			std::cout << "PLAYER ONE WINS!!";
		}
	}
}

void chp4Q2()
{

	char user_input = 'Y';

	while (user_input == 'Y') {
		double weight_in_pounds;
		double height_in_inches;
		int age_in_years;
		double hat_size;
		double jacket_size;
		double waist_in_inches;

		//<< this program asks for user's height, weight, and age, and then computes clothing sizes according to the formulas\n>>

		std::cout << "Please enter your weight in pounds";
		std::cin >> weight_in_pounds;

		std::cout << "Please enter your height in inches";
		std::cin >> height_in_inches;

		std::cout << "Please enter your age in years";
		std::cin >> age_in_years;


		hat_size = (weight_in_pounds / height_in_inches) * 2.9;

		jacket_size = (height_in_inches * weight_in_pounds) / 288;

		if (age_in_years > 30) {
		
			int difference = age_in_years - 30;
			int how_many_time_to_add = difference / 10;
			
			jacket_size = jacket_size + (0.125 * how_many_time_to_add);
		
		}


		waist_in_inches = weight_in_pounds / 5.7;

		if (age_in_years > 28) {
			int waist_diff = age_in_years - 28;
			int waist_how_many_times = waist_diff / 2;

		
			waist_in_inches = waist_in_inches + (0.1 * waist_how_many_times);
		

		}


		std::cout << "\n Hat size is " << hat_size;
		std::cout << "\n Jacket size is " << jacket_size;
		std::cout << "\n Waist size is " << waist_in_inches;


		std::cout << "Do you want to continue ";
		std::cin >> user_input;
	}


}




int main() {
	
	//chp2Q7();
	//chp4Q1();
	//chp2Q13();
	//chp3Q1();

	chp4Q2();


}