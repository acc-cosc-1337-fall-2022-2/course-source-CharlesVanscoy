﻿//write include statements
#include <iostream>
#include "data_types.h"

//write namespace using statement for cout
using namespace std;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/

int main()
{
	int product, input1, input2;
	input1 = 10;
	input2 = 10;
	product = multiply_numbers(input1, input2);
	cout << input1 << " X " << input2 << " = " << product;
	return product;
}
