#include <iostream>

int main (){
    return 0;
}

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