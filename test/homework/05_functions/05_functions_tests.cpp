#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test function get_gc_content") {
	REQUIRE(get_gc_content("AGCTATAG") == 0.375);
	REQUIRE(get_gc_content("CGCTATAG") == 0.50);
}

TEST_CASE("Test function get_reverse_string") {
	REQUIRE(reverse_string("AGCTATAG") == "GATATCGA");
}

TEST_CASE("Test function get dna compliment") {
	REQUIRE(true == true);
}