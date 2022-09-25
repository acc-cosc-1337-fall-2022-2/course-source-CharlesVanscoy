//write include statements
#include "decisions.h"

int main() 
{
	int choice;
	int num_grade;
	cout << "	MAIN MENU\n\n1-Letter grade using if\n2-Letter grade using switch\n3-Exit\n";
	cin >> choice;
	switch(choice)
	{
		case 1:
			cout << "Enter numerical grade as an integer between 0 and 100\n";
			cin >> num_grade;
			cout << get_letter_grade_using_if(num_grade);
			break;
		case 2:
			cout << "Enter numerical grade as an integer between 0 and 100\n";
			cin >> num_grade;
			cout << get_letter_grade_using_switch(num_grade);
			break;
		case 3:
			break;

	}
}