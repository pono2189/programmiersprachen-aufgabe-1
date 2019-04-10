#include <iostream>
#define CATCH_CONFIG_RUNNER
#include <catch.hpp>

float fract(float a){
    int b = a - fract(a); 
    return b; 
}

TEST_CASE ("describe_fract","[fract]") {
    REQUIRE (fract(1.34543) == 0.34543);
    REQUIRE (fract(324322.4398) == 0.4398);
    REQUIRE (fract(0.908245) == 0.908245);
}






int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
