#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>

 //Aufgabe 1.8
int gcd(int a, int b){
    int c = a % b;
    if (0 != c){
        return gcd(b,c);  
    }
    else{
        return b; 
    }
}

TEST_CASE ("describe_gcd","[gcd]") {
    REQUIRE(gcd(2,4) == 2);
    REQUIRE(gcd(9,6) == 3);
    REQUIRE(gcd(3,7) == 1);
}


//aufgabe 1.9

int checksum (int a){
    int sum = 0; 
    while (a >= 10){
        int b = a % 10;
        int c = a - b; 
        a = a/10; 
        sum = sum + b; 
    }
    sum = sum + a;
    return sum; 
}
    
TEST_CASE ("describe_checksum","[checksum]") {
    REQUIRE (checksum(15) == 6);
    REQUIRE (checksum(0) == 0);
    REQUIRE (checksum(120117) == 12);
}


//Aufgabe 1.10
int sum_multiples() {
    int sum = 0; 
    for (int a = 0; a <= 1000; a+3){
        sum = sum + a; 
        a += 2; 
        sum = sum + a; 
    }
    return sum; 
}
TEST_CASE ("sum_multiples","[sum_multiples]") {
    REQUIRE (sum_multiples() == 502002);
}

// Aufgabe 1.11
float fract(float a){
    int b = a;
    return a-b; 
}

TEST_CASE ("describe_fract","[fract]") {
    REQUIRE (fract(1.34543) == Approx(0.34543));
    REQUIRE (fract(324.4398) == Approx(0.4398));
    REQUIRE (fract(0.908245) == Approx(0.908245));
}

//Aufgabe 1.12
float surface_cyl (float height, float radius) {
  float surface = 2 * M_PI * radius * (radius + height); 
  return surface;
}
TEST_CASE ("describe_surface_cyl","[surface_cyl]") {
    REQUIRE (surface_cyl(5, 4) == Approx(226.195).epsilon(0.2));
    REQUIRE (surface_cyl(1.3, 2.7) == Approx(67.858).epsilon(0.2));
    REQUIRE (surface_cyl(0, 0) == 0);
}

float vol_cyl (float height, float radius) {
  float volume = M_PI * radius * radius * height; 
  return volume;
}
TEST_CASE ("describe_vol_cyl","[vol_cyl]") {
    REQUIRE (vol_cyl(5, 4) == Approx(251.327).epsilon(0.2));
    REQUIRE (vol_cyl(1.3, 2.7) == Approx(29.773).epsilon(0.2));
    REQUIRE (vol_cyl(0, 0) == 0);
}

// Aufgabe 1.13
int factorial (int a){
  int sum = 1;
  for (int i = 1; i <= a; i++){
    sum = sum * i; 
  }
  return sum; 
}

TEST_CASE ("describe_factorial","[factorial]") {
    REQUIRE (factorial(5) == 120);
    REQUIRE (factorial(1) == 1);
    REQUIRE (factorial(8) == 40320);
}

// Aufagbe 1.14
bool is_prime(int a){
    bool prime = true;  
    for (int i = 2; i<a; i++ ){
        if (a % i == 0){
            prime = false; 
            break; 
        }
    }
    return prime; 
}

TEST_CASE ("describe_is_prime","[is_prime]") {
    REQUIRE (is_prime(2) == true);
    REQUIRE (is_prime(25) == false);
    REQUIRE (is_prime(47) == true);
}

double mile_to_kilometer(double mile){
    double km; 
    km = mile * 1.60934; 
    return km; 
    
}

TEST_CASE ("mile_to_kilometer","[mile_to_kilometer]") {
    REQUIRE (mile_to_kilometer(2) == Approx(3.21869));
    REQUIRE (mile_to_kilometer(23) == Approx(37.0149));
    REQUIRE (mile_to_kilometer(0) == 0);
}

int main(int argc, char* argv[])
{
  return Catch::Session().run(argc, argv);
}
