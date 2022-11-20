//cpp
//Charles Vanscoy
//10 27 2022

#include "tic_tac_toe.h"

//TicTacToe::TicTacToe(int v_size) : size(v_size), pegs((v_size * v_size), " "){}

void TicTacToe::clear_board() {
    for (int i = 0; i < pegs.size(); i++) {
        pegs[i] = " ";
    }
}

bool TicTacToe::check_board_full() {
    for (int i = 0; i < pegs.size(); i++) {
        if (TicTacToe::pegs[i] == " ") {
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

//Previous function to display the board, moved to overload of ostream
//void TicTacToe::display_board() const {
//    cout << "| " << pegs[0] << " | " << pegs[1] << " | " << pegs[2] << " |\n"\
//    << "| " << pegs[3] << " | " << pegs[4] << " | " << pegs[5] << " |\n"\
//    << "| " << pegs[6] << " | " << pegs[7] << " | " << pegs[8] << " |\n";
//}

string TicTacToe::get_player() const{
    return player;
}

void TicTacToe::mark_board(int position) {
    pegs[position-1] = player;
    set_next_player();
}

void TicTacToe::start_game(string first_player) {
    TicTacToe::player = first_player;
    clear_board();
}

bool TicTacToe::game_over(){
    bool fin = false;
    bool callwin = check_column_win();
    bool diawin = check_diagonal_win();
    bool rowin = check_row_win();
    if ((check_column_win() == true) || (check_diagonal_win() == true) || (check_row_win() == true)){
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
    return false;
}

bool TicTacToe::check_row_win(){
    return false;
}

bool TicTacToe::check_diagonal_win(){
    return false;
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

std::istream& operator>>(std::istream& in, TicTacToe& game){
    bool fail;
    int position;
    do{
        fail = false;
        cin >> position;
        cin.clear();
        cin.sync();
        //if(position != 1 && position != 2 && position != 3 && position != 4 && position != 5 && position != 6 && position != 7 && position != 8 && position != 9){
        //    cout << "Presente un numero entre 1 y 9, por favor.";
        //    fail = true;
        //}
        for(int i = 1; i <= game.pegs.size(); i++){
            if(position == i){
                fail = false;
            }
            else{
                fail = true;
            }
        }
        if(game.pegs[position-1] != " "){
            cout << "No puedes escoger este posición porque ya esta lleno. Escoja un posición nuevo, por favor.";
            fail = true;
        }
        else{
            game.mark_board(position);
            fail = false;
        }        
    }while(fail == true);
    
    return in;				
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& game){
    if(game.pegs.size() == 9){
        std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"\
            << "| " << game.pegs[0] << " | " << game.pegs[1] << " | " << game.pegs[2] << " |\n"\
            << "| " << game.pegs[3] << " | " << game.pegs[4] << " | " << game.pegs[5] << " |\n"\
            << "| " << game.pegs[6] << " | " << game.pegs[7] << " | " << game.pegs[8] << " |\n";
    }
    else{
        std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"\
            << "| " << game.pegs[0] << " | " << game.pegs[1] << " | " << game.pegs[2] << " | " << game.pegs[3] << " |\n"\
            << "| " << game.pegs[4] << " | " << game.pegs[5] << " | " << game.pegs[6] << " | " << game.pegs[7] << " |\n"\
            << "| " << game.pegs[8] << " | " << game.pegs[9] << " | " << game.pegs[10] << " | " << game.pegs[11] << " |\n"\
            << "| " << game.pegs[12] << " | " << game.pegs[13] << " | " << game.pegs[14] << " | " << game.pegs[15] << " |\n";
    }
    return out;
}