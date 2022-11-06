
#include "tic_tac_toe.h"

int main() 
{
	TicTacToe board;
	string first_player;

	do{
        cout << "Player one, will you be X or O?\n";
        cin >> first_player;

        if (first_player != "x" && first_player != "X" && first_player != "O" && first_player != "o"){
            first_player = "";
            cout << "\nInvalid input, try again\n\n";
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
	bool fin;

	while(exit != true){
		board.start_game(first_player);
		vector<int> taken(1, 0);
		do{
			cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
			board.display_board();

			do{
				fin = false;
				cin >> position;

				for(int i = 1; i < 10; i++){
					if(i == position){

						for(int j = 0; j < taken.size(); j++){

							if(position == taken[j]){
								cout << "\n\nInvalid input, please choose a spot that has not yet been selected.\n";
								position = taken[j+1];
								fin = false;
							}
							else{
								fin = true;
								i = 9;
							}

						}

					}
					else if(i == 9){
						cout << "\n\nInvalid input, please choose an integer from 1 to 9\n";
						fin = false;
					}

				}

			}while(fin == false);

			board.mark_board(position);
			taken.push_back(position);
			finish = board.game_over();
		}while (finish == false);

		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		board.display_board();
		cout << "\nPlayer \"" << board.get_winner() << "\" has won the game!";
		cout << "\n\nDo you want to quit? (Enter y to exit)";
		cin >> choice;
		if(choice == "y" || choice == "Y")
			exit = true;
	}

	return 0;
}