//add include statements
#include "dna.h"

using std::cout;
using std::cin;
using std::string;
//add function(s) code here

int factorial(int num){
    int i = num;
    int product = 1;
    while(i > 0){
        product = i * product;
        i--;
    }
    return product;
}

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