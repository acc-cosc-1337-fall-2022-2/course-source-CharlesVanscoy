//write include statements
#include "dna.h"
//write using statements
using std::cout;
using std::cin;
using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() {
	bool finish = false;
	int result = 0;
	while(!finish) {
		int num = 0;
		int num1 = 0;
		int num2 = 0;
		int choice_main = get_choice();
		char exit;
		switch(choice_main) {
			case 1:
				cout << "What number would you like the factorial of?\n";
				cin >> num;
				result = factorial(num);
				finish = true;
				break;
			case 2:
				cout << "Enter two numbers to get their greatest common devisor\n";
				cin >> num1;
				cin >> num2;
				result = gcd(num1,num2);
				finish = true;
				break;
			case 3:
				cout << "Are you sure you would like to exit? (y/n)\n";
				cin >> exit;
				if(exit == 'y'){
					finish = true;
				}
				break;
			default:
				cout << "INVALID SELECTION PLEASE TRY AGAIN\n";
				break;
		}
	}
	if(result != 0){
		cout << result;
	}
	return 0;
}