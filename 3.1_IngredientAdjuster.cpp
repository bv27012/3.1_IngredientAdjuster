// Calculates how much of each ingredient is needed to make an input amount of cookies, based off 48 cookies.

#include <iostream>
using namespace std;

int main()
{
	const int originalCookies = 48;
	const int originalButter = 1; //in cups
	const double originalSugar = 1.5; //in cups
	const double originalFlour = 2.75; //in cups

	cout << "Original Recipe: 48 cookies" << endl;
	cout << endl;
	cout << "Butter: " << originalButter << " cups" << endl;
	cout << "Sugar: " << originalSugar << " cups" << endl;
	cout << "Flour: " << originalFlour << " cups" << endl;
	cout << endl;

	int userCookies;
	cout << "How many cookies do you want to make?" << endl;
	cin >> userCookies;
	cout << endl;

}