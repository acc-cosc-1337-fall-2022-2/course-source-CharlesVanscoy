//h
#include "tic_tac_toe.h"
#ifndef TICTACTOE3_H
#define TICTACTOE3_H

class TTT_3: public TicTacToe{
    public:
        TTT_3(): TicTacToe(3){}
    private:
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
};

#endif