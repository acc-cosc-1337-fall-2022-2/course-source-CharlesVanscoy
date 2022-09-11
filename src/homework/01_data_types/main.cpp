/*
 * Filename: main.cpp
 * Last modified by: Charles VanScoy
 * Modified date: 9/10/2022
*/

//write include statements
#include <iostream>
#include "data_types.h"

//write namespace using statement for cout
using namespace std;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/

int main()
{
	int product, input1;
	input1 = 10;
	product = multiply_numbers(input1);
	cout << input1 << " X " << "5" << " = " << product;
	return product;
}
