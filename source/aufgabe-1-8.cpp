# define CATCH_CONFIG_RUNNER
# include "catch.hpp"
# include <cmath>
 
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
    REQUIRE (checksum(14398) == 25);
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


// Aufgabe 1.13
int factorial (int a){
    int sum = a;
    if (a =! 1){
        sum = sum*(a-1);
        factorial(a-1);
    }
    else{ 
        return sum; 
    }
   
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

int main (int argc, char* argv[]){
    return Catch::Session().run(argc, argv);
}
