//Charles Vanscoy
//09/24/2022
//COSC 1337

//write include statement for decisions header
#include "decisions.h"

//Write code for function(s) code here
//This function takes an integer and returns a letter grade using an if elif else structure
string get_letter_grade_using_if(int grade) {
    string letter_grade;
    if (grade <= 59 && grade >= 0) {
        letter_grade = "F";
    }
    else if (grade <= 69 && grade >= 60) {
        letter_grade = "D";
    }
    else if (grade <= 79 && grade >= 70) {
        letter_grade = "C";
    }
    else if (grade <= 89 && grade >= 80) {
        letter_grade = "B";
    }
    else if (grade <= 100 && grade >= 90) {
        letter_grade = "A";
    }
    else {
    cout << "Invalid input, number out of range.";    
    }
    return letter_grade;
}
//This function takes an integer and returns a letter grade using a switch statement
string get_letter_grade_using_switch(int grade) {
    string letter_grade;
    switch (grade) {
        case 0 ... 59: 
            letter_grade = "F";
            break;
        case 60 ... 69: 
            letter_grade = "D";
            break;
        case 70 ... 79: 
            letter_grade = "C";
            break;
        case 80 ... 89: 
            letter_grade = "B";
            break;
        case 90 ... 100: 
            letter_grade = "A";
            break;
        default:
            cout << "Invalid input, number out of range.";
            break;
    }
    return letter_grade;
}