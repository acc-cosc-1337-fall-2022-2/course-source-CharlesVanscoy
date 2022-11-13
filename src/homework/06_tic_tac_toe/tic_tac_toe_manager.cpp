//cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game(TicTacToe b){
    game_list.push_back(b);
    string win = b.get_winner();
    update_winner_count(win);
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager){
    for(int i = 0; i < manager.game_list.size(); i++){
        out << manager.game_list[i];
    }
    return out;
}

void TicTacToeManager::get_winner_total(int& o, int& w, int&t){
    o = o_win;
    w = x_win;
    t = ties;
}

void TicTacToeManager::update_winner_count(string winner){

    if(winner == "X"){
        x_win++;
    }
    else if(winner == "O"){
        o_win++;
    }
    else{
        ties++;
    }
}