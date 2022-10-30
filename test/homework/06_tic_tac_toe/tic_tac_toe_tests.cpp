#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify Game Over works") {
	TicTacToe test_game;
	test_game.start_game("X");
	test_game.mark_board(4);
	REQUIRE(test_game.game_over() == false);
	test_game.mark_board(3);
	REQUIRE(test_game.game_over() == false);
	test_game.mark_board(5);
	REQUIRE(test_game.game_over() == false);
	test_game.mark_board(2);
	REQUIRE(test_game.game_over() == false);
	test_game.mark_board(1);
	REQUIRE(test_game.game_over() == false);
	test_game.mark_board(6);
	REQUIRE(test_game.game_over() == false);
	test_game.mark_board(9);
	REQUIRE(test_game.game_over() == false);
	test_game.mark_board(8);
	REQUIRE(test_game.game_over() == false);
	test_game.mark_board(7);
	REQUIRE(test_game.game_over() == true);
}
