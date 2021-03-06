//Jenna Lambert
//Lab 4.2
#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//declaring variables
	int choice, quantity;
	float subtotal, total, tax = .05, hamburger = 4.5, sandwich = 3, hotdog = 2;

	//formatting
	cout << setprecision(2) << fixed;

	//initial prompt
	cout << "Please enter your choice (in number):\n" << "" << "1-Hamburger  ($4.50)\n" << "2-Sandwich   ($3.00)\n" << "3-Hot Dog    ($2.00)\n" << "Your Choice: ";
	cin >> choice;

	//select case
	switch (choice) {
	case 1:
		cout << "How many hamburgers would you like? ";
		cin >> quantity;
		subtotal = hamburger * quantity;
		total = (subtotal * tax) + subtotal;
		cout << "The toatal charge is $" << total;
		break;
	case 2:
		cout << "How many Sandwiches would you like? ";
		cin >> quantity;
		subtotal = sandwich * quantity;
		total = (subtotal * tax) + subtotal;
		cout << "The toatal charge is $" << total;
		break;
	case 3:
		cout << "How many hot dogs would you like? ";
		cin >> quantity;
		subtotal = hotdog * quantity;
		total = (subtotal * tax) + subtotal;
		cout << "The toatal charge is $" << total;
		break;
	default:
		cout << "Order entered incorrectly";
		break;
	}
}