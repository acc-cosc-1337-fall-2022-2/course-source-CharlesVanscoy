//h

#include "tic_tac_toe.h"
#ifndef TICTACTOE4_H
#define TICTACTOE4_H

class TTT_4: public TicTacToe{
    public:
        TTT_4(): TicTacToe(4){}
    private:
        bool check_column_win();
        bool check_row_win();
        bool check_diagonal_win();
};

#endif