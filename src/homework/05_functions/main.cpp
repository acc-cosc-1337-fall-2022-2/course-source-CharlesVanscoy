#include "func.h"

int main() 
{
	int choice;
	string input;
	string output;
	cout << "Menu\n\n1- Get GC Content\n2- Get DNA Complement\n3- Exit\n";
	cin >> choice;
	if (choice == 3){
		exit(0);
	}
	cout << "Enter dna string to process.\n";
	cin >> input;
	if (choice == 1){
		cout << get_gc_content(input);
	}
	else if (choice ==2){
		cout << get_dna_complement(input);
	}
	return 0;
}