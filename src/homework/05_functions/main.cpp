#include "func.h"

int main() 
{
	string input;
	cin >> input;
	cout << input.length();
	cout << "\n" << reverse_string(input);
	return 0;
}