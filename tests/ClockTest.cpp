#define CATCH_CONFIG_MAIN
#include "../Clock.h"
#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_string.hpp>

using Catch::Matchers::ContainsSubstring;


// Sanity test
TEST_CASE("1 is 1") {
    REQUIRE( 1 == 1);
}
