//Charles Vanscoy
//10/02/2022
//COSC 1337

//add include statements
#include "dna.h"

using std::cout;
using std::cin;
using std::string;
//add function(s) code here

//returns the factorial of the input
int factorial(int num){
    int i = num;
    int product = 1;
    while(i > 0){
        product = i * product;
        i--;
    }
    return product;
}

//returns the greatest common denominator of the two inputs
int gcd(int num1, int num2){
    int temp;
    while(num1 != num2){
        if(num1 < num2){
            temp = num1; num1 = num2; num2 = temp;
        }   
        else if(num1>num2){
            num1 -= num2;
        }
    }
    return num1;
}

//displays menu, returns selection
int get_choice(){
    string menu[] = {"Select the function you would like to use.\n","1-Factorial\n","2-Greatest Common Divisor\n","3-Exit\n"};
	int choice;
	int i = 0;

	do {
		cout << menu[i];
		i++;
		} while(i < 4);
	cin >> choice;
	return choice;
}