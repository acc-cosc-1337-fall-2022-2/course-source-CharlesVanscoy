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
    return check_board_full();
}


// 1) First_player function argument value must be X or O
// 2) In function set player(private variable) to first_player function argument. 
// 3) Call the clear_board function