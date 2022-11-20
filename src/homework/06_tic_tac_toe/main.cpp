#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

using std::make_unique;

int main() 
{
	int size = 4;//can only be 3 or 4

	unique_ptr<TicTacToe> board;
	TicTacToeManager manager;
	string first_player;
	int board_size = 0;

	do{
        cout << "Would you like to play 3x3 or 4x4 TicTacToe?\n";
        cin >> board_size;

        if (board_size != 3 && board_size != 4){
            board_size = 0;
            cout << "\nInvalid input, try again\n\n";
        }
		else if(board_size == 3){
			board = make_unique<TTT_3>();
		}
		else if(board_size == 4){
			board = make_unique<TTT_4>();
		}

    } while (board_size == 0);

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
	int x_win;
	int o_win;
	int ties;
	string choice;
	bool go;

	

	while(exit != true){
		board->start_game(first_player);

		do{
		cout<<*board;
		cin>>*board;
		}while(board->game_over() == false);

		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
		
		cout << "\nPlayer \"" << board->get_winner() << "\" has won the game!";
		manager.save_game(board);//save_game takes a ref to a unique ptr not TicTacToe, dereferencing throws an error, changing save_game to take TicTacToe doesn't work
		std::cout << "\n\nDo you want to quit? (Enter y to exit)";
		cin >> choice;
		manager.get_winner_total(o_win, x_win, ties);
		cout << "\nX won " << x_win << " times. O won " << o_win << " times. And they tied " << ties <<" times.\n\n";
		if(choice == "y" || choice == "Y")
			exit = true;
	}

	return 0;
}

// do{
// 				fin = false;
// 				cin >> position;

// 				for(int i = 1; i < 10; i++){
// 					if(i == position){

// 						for(int j = 0; j < taken.size(); j++){

// 							if(position == taken[j]){
// 								cout << "\n\nInvalid input, please choose a spot that has not yet been selected.\n";
// 								fin = false;
// 							}
// 							else{
// 								fin = true;
// 								i = 9;
// 							}

// 						}

// 					}
// 					else if(i == 9){
// 						cout << "\n\nInvalid input, please choose an integer from 1 to 9\n";
// 						fin = false;
// 					}

// 				}

// 			}while(fin == false);
