#include "tic_tac_toe_3.h"
#include "tic_tac_toe.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/
bool TTT_3::check_column_win(){
    bool win = false;
    for (int i = 0; i < 3; i++){
        if((pegs[i] == pegs[i+3]) && (pegs[i+3] == pegs[i+6]) && (pegs[i] != " ")){
            win =  true;
        }
    }
    return win;
}


/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/
bool TTT_3::check_row_win(){
    bool win = false;
    for (int i = 0; i < 3; i++){
        if((pegs[((3 * i))] == pegs[(1 + (3 * i))]) && (pegs[(1 + ((3 * i)))] == pegs[(2 + (3 * i))]) && (pegs[(3 * i)] != " ")){
            win =  true;
        }
    }
    return win;
}


/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/


bool TTT_3::check_diagonal_win(){
    bool win = false;
    if(((pegs[0] == pegs[4]) && (pegs[4] == pegs[8]) && (pegs[4] != " ")) || ((pegs[2] == pegs[4]) && (pegs[4] == pegs[6]) && (pegs[4] != " "))){
            win = true;
    }
    return win;
}