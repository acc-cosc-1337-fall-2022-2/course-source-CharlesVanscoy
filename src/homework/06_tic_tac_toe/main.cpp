
#include "tic_tac_toe.h"

int main() 
{
	TicTacToe board;
	string first_player;
	do{
        cout << "Player one, will you be X or O?";
        cin >> first_player;
        if (first_player != "x" && first_player != "X" && first_player != "O" && first_player != "o"){
            first_player = "";
            cout << "Invalid input, try again";
        }
		else if(first_player == "x"){
			first_player = "X";
		}
		else if(first_player == "o"){
			first_player = "O";
		}

    } while (first_player == "");
	

	int position; 
	bool exit;
	bool finish;
	string choice;
	while(exit != true){
		board.start_game(first_player);
		do{
			board.display_board();
			cin >> position;
			board.mark_board(position);
			finish = board.game_over();
		}while (finish == false);
		cout << "Do you want to quit? (y/n)";
		cin >> choice;
		if(choice == "y")
			exit = true;
	}

	return 0;
}