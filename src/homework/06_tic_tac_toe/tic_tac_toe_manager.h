//h
#include "tic_tac_toe.h"
#include <memory>
#ifndef TICTACTOEMANAGER_H
#define TICTACTOEMANAGER_H
using std::unique_ptr;

class TicTacToeManager{
    public:
        void save_game(unique_ptr<TicTacToe> &b);
        friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);
        void get_winner_total(int& o, int& w, int&t);
    private:
        vector<unique_ptr<TicTacToe>> game_list;
        int x_win = 0;
        int o_win = 0;
        int ties = 0;
        void update_winner_count(string winner);
};

#endif