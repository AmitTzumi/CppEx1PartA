/**
 * AUTHORS: <Amit Tzumi>
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;


TEST_CASE("Good snowman code") {
    CHECK((snowman(11111111)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(21111111)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(31111111)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(41111111)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(12111111)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(13111111)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(14111111)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11211111)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11311111)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11411111)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11121111)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11131111)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11141111)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11112111)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11113111)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11114111)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11111211)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11111311)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11111411)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11111121)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11111131)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11111141)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11111112)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11111113)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11111114)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(22222222)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(33333333)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(44444444)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11223344)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(44332211)) == "_===_\n(.,.)\n( : )\n( : )");
    CHECK((snowman(11114411)) == "_===_\n(.,.)\n( : )\n( : )");
}

TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(555)); // length is not 8
	CHECK_THROWS(snowman(1)); // all the examples below are 1-7 length
    CHECK_THROWS(snowman(12));
    CHECK_THROWS(snowman(123));
    CHECK_THROWS(snowman(1234));
    CHECK_THROWS(snowman(12341));
    CHECK_THROWS(snowman(123411));
    CHECK_THROWS(snowman(2222222));
    CHECK_THROWS(snowman(-2)); // negative
    CHECK_THROWS(snowman(-55555555)); // negative number
	CHECK_THROWS(snowman(12345678)); // range 1-4
	CHECK_THROWS(snowman(111111111)); // 9 letter input
    CHECK_THROWS(snowman(12341235)); // 1 number is not in the range
}


