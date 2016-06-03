#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "anwari/hello.h"

using namespace Anwari;

SCENARIO("Can be instantiated") {
    Hello* hello = new Hello();
    REQUIRE(hello->say() == "OK");
    delete hello;
}
