//h
#include <vector>
#include <string>
#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::vector;
#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe{
    public:
        TicTacToe(){}
        TicTacToe(int size):pegs(size*size, " "){}
        int size;
        string get_winner();
        void display_board() const;
        string get_player() const;
        void mark_board(int position);
        void start_game(string first_player);
        bool game_over();
        friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
        friend std::istream& operator>>(std::istream& in, TicTacToe& game);
    
    protected:
        std::vector<std::string> pegs;
        virtual bool check_column_win();
        virtual bool check_row_win();
        virtual bool check_diagonal_win();

    private:
        string winner;
        string player;
        void set_winner();
        void clear_board();
        bool check_board_full();
        void set_next_player();
};

#endif