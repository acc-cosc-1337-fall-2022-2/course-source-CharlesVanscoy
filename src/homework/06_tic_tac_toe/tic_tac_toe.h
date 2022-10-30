//h
#include <Vector>
#include <String>
#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::vector;

class TicTacToe {
    private:
        string player;
        vector <string> pegs{" ", " ", " ", " ", " ", " ", " ", " ", " ",};
        void clear_board();
        bool check_board_full();
        void set_next_player();
    public:
        void display_board() const;
        string get_player() const;
        void mark_board(int position);
        void start_game(string first_player);
        bool game_over();
};