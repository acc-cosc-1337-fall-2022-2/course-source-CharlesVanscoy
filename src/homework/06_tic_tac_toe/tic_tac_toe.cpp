//cpp
//Charles Vanscoy
//10 27 2022

#include "tic_tac_toe.h"

void TicTacToe::clear_board() {
    for (int i = 0; i < 9; i++) {
        pegs[i] = " ";
    }
}

bool TicTacToe::check_board_full() {
    for (int i = 0; i < 9; i++) {
        if (pegs[i] == " ") {
            return false;
        }
    }
    return true;
}

void TicTacToe::set_next_player() {
    if (player == "X") {
        player = "O";
    }
    else{
        player = "X";
    }
}

void TicTacToe::display_board() const {
    cout << "| " << pegs[0] << " | " << pegs[1] << " | " << pegs[2] << " |\n"\
    << "| " << pegs[3] << " | " << pegs[4] << " | " << pegs[5] << " |\n"\
    << "| " << pegs[6] << " | " << pegs[7] << " | " << pegs[8] << " |\n";
}

string TicTacToe::get_player() const{
    return player;
}

void TicTacToe::mark_board(int position) {
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::start_game(string first_player) {
    player = first_player;
    clear_board();
}

bool TicTacToe::game_over(){
    bool fin = false;
    if (check_column_win() == true || check_diagonal_win() == true || check_row_win() == true){
        set_winner();
        fin = true;
    }
    else if (check_board_full() == true){
        winner = "C";
        fin = true;
    }
    return fin;
}

bool TicTacToe::check_column_win(){
    bool win = false;
    for (int i = 0; i < 3; i++){
        if((pegs[i] == pegs[i+3]) && (pegs[i+3] == pegs[i+6]) && (pegs[i] != " ")){
            win =  true;
        }
    }
    return win;
}

bool TicTacToe::check_row_win(){
    bool win = false;
    for (int i = 0; i < 3; i++){
        if((pegs[((3 * i))] == pegs[(1 + (3 * i))]) && (pegs[(1 + ((3 * i)))] == pegs[(2 + (3 * i))]) && (pegs[(3 * i)] != " ")){
            win =  true;
        }
    }
    return win;
}

bool TicTacToe::check_diagonal_win(){
    bool win = false;
    if(((pegs[0] == pegs[4]) && (pegs[4] == pegs[8]) && (pegs[4] != " ")) || ((pegs[2] == pegs[4]) && (pegs[4] == pegs[6]) && (pegs[4] != " "))){
            win = true;
    }
    return win;
}

void TicTacToe::set_winner(){
    if (player == "X"){
        winner = "O";
    }
    else{
        winner = "X";
    }
}

string TicTacToe::get_winner(){
    return winner;
}

// 1) First_player function argument value must be X or O
// 2) In function set player(private variable) to first_player function argument. 
// 3) Call the clear_board function