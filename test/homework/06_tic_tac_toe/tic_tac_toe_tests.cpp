#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
//#include "./../../../src/homework/06_tic_tac_toe/tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Game Over works") {
	TicTacToe test_game;
	test_game.start_game("X");
	test_game.mark_board(7);
	REQUIRE(test_game.game_over() == false);
	test_game.mark_board(9);
	REQUIRE(test_game.game_over() == false);
	test_game.mark_board(8);
	REQUIRE(test_game.game_over() == false);
	test_game.mark_board(2);
	REQUIRE(test_game.game_over() == false);
	test_game.mark_board(3);
	REQUIRE(test_game.game_over() == false);
	test_game.mark_board(4);
	REQUIRE(test_game.game_over() == false);
	test_game.mark_board(6);
	REQUIRE(test_game.game_over() == false);
	test_game.mark_board(5);
	REQUIRE(test_game.game_over() == false);
	test_game.mark_board(1);
	REQUIRE(test_game.game_over() == true);
	REQUIRE(test_game.get_winner() == "C");
}

TEST_CASE("Test first player set to X"){
	TicTacToe test_game;
	test_game.start_game("X");
	REQUIRE(test_game.get_player() == "X");
}

TEST_CASE("Test first player set to O"){
	TicTacToe test_game;
	test_game.start_game("O");
	REQUIRE(test_game.get_player() == "O");
}

TEST_CASE("Test win by column"){
	TicTacToe test_game;
	test_game.start_game("X");
	test_game.mark_board(1);
	test_game.mark_board(2);
	test_game.mark_board(4);
	test_game.mark_board(5);
	test_game.mark_board(7);
	REQUIRE(test_game.game_over() == true);
	test_game.game_over();
	REQUIRE(test_game.get_winner() == "X");

	test_game.start_game("X");
	test_game.mark_board(2);
	test_game.mark_board(1);
	test_game.mark_board(5);
	test_game.mark_board(4);
	test_game.mark_board(8);
	REQUIRE(test_game.game_over() == true);
	test_game.game_over();
	REQUIRE(test_game.get_winner() == "X");

	test_game.start_game("X");
	test_game.mark_board(3);
	test_game.mark_board(1);
	test_game.mark_board(6);
	test_game.mark_board(4);
	test_game.mark_board(9);
	REQUIRE(test_game.game_over() == true);
	test_game.game_over();
	REQUIRE(test_game.get_winner() == "X");
}

TEST_CASE("Test win by row"){
	TicTacToe test_game;
	test_game.start_game("X");
	test_game.mark_board(1);
	test_game.mark_board(4);
	test_game.mark_board(2);
	test_game.mark_board(5);
	test_game.mark_board(3);
	REQUIRE(test_game.game_over() == true);
	test_game.game_over();
	REQUIRE(test_game.get_winner() == "X");

	test_game.start_game("X");
	test_game.mark_board(4);
	test_game.mark_board(1);
	test_game.mark_board(5);
	test_game.mark_board(2);
	test_game.mark_board(6);
	REQUIRE(test_game.game_over() == true);
	test_game.game_over();
	REQUIRE(test_game.get_winner() == "X");

	test_game.start_game("X");
	test_game.mark_board(7);
	test_game.mark_board(1);
	test_game.mark_board(8);
	test_game.mark_board(2);
	test_game.mark_board(9);
	REQUIRE(test_game.game_over() == true);
	test_game.game_over();
	REQUIRE(test_game.get_winner() == "X");
}

TEST_CASE("Test win by diagonal"){
	TicTacToe test_game;
	test_game.start_game("X");
	test_game.mark_board(1);
	test_game.mark_board(2);
	test_game.mark_board(5);
	test_game.mark_board(4);
	test_game.mark_board(9);
	REQUIRE(test_game.game_over() == true);
	test_game.game_over();
	REQUIRE(test_game.get_winner() == "X");

	test_game.start_game("X");
	test_game.mark_board(3);
	test_game.mark_board(1);
	test_game.mark_board(5);
	test_game.mark_board(4);
	test_game.mark_board(7);
	REQUIRE(test_game.game_over() == true);
	test_game.game_over();
	REQUIRE(test_game.get_winner() == "X");
}

TEST_CASE("Test Manager Class Function get_winner_total"){
	TicTacToe test_game_o;
	TicTacToeManager test_manager;
	test_game_o.start_game("O");
	test_game_o.mark_board(1);
	test_game_o.mark_board(2);
	test_game_o.mark_board(5);
	test_game_o.mark_board(4);
	test_game_o.mark_board(9);
	REQUIRE(test_game_o.game_over() == true);
	test_game_o.game_over();
	REQUIRE(test_game_o.get_winner() == "O");
	test_manager.save_game(test_game_o);

	TicTacToe test_game_x;
	test_game_x.start_game("X");
	test_game_x.mark_board(3);
	test_game_x.mark_board(1);
	test_game_x.mark_board(5);
	test_game_x.mark_board(4);
	test_game_x.mark_board(7);
	REQUIRE(test_game_x.game_over() == true);
	test_game_x.game_over();
	REQUIRE(test_game_x.get_winner() == "X");
	test_manager.save_game(test_game_x);

	TicTacToe test_game_ty;
	test_game_ty.start_game("X");
	test_game_ty.mark_board(7);
	REQUIRE(test_game_ty.game_over() == false);
	test_game_ty.mark_board(9);
	REQUIRE(test_game_ty.game_over() == false);
	test_game_ty.mark_board(8);
	REQUIRE(test_game_ty.game_over() == false);
	test_game_ty.mark_board(2);
	REQUIRE(test_game_ty.game_over() == false);
	test_game_ty.mark_board(3);
	REQUIRE(test_game_ty.game_over() == false);
	test_game_ty.mark_board(4);
	REQUIRE(test_game_ty.game_over() == false);
	test_game_ty.mark_board(6);
	REQUIRE(test_game_ty.game_over() == false);
	test_game_ty.mark_board(5);
	REQUIRE(test_game_ty.game_over() == false);
	test_game_ty.mark_board(1);
	REQUIRE(test_game_ty.game_over() == true);
	REQUIRE(test_game_ty.get_winner() == "C");
	test_manager.save_game(test_game_ty);

	int x;
	int o;
	int ty;
	test_manager.get_winner_total(o,x,ty);
	cout << o << x << ty;

	REQUIRE(((x == 1) && (o == 1) && (ty == 1)));
}