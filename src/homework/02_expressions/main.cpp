//write include statements
#include "hwexpressions.h"
#include <iostream>
//write namespace using statement for cout
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/

int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;
	cout << "Please enter the meal's cost, in dollars, before tax or tip\n";
	cin >> meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);
	cout << "Please enter the tip rate\n";
	cin >> tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);
	total = tip_amount + tax_amount + meal_amount;
	cout << "Meal Amount:	$" << meal_amount << "\nSales Tax:	$" << tax_amount << "\nTip Amount:	$" << tip_amount << "\nTotal:	$" << total;
	return 0;
}