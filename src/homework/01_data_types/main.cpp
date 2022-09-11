/*
 * Filename: main.cpp
 * Last modified by: Charles VanScoy
 * Modified date: 9/10/2022
*/

//write include statements
#include <iostream>
#include "data_types.h"

//write namespace using statement for cout
using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/

int main()
{
	int num;
	cin >> num;
	int result;
	result = multiply_numbers(num);
	cout << result;
	int num1;
	num1 = 4;
	result = multiply_numbers(num1);
 	cout << result;
	return 0;
}
