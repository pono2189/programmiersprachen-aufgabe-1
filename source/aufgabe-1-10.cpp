#include <iostream>


int sum_multiples() {
    int sum = 0; 
    for (int a = 0; a <= 1000; a+3){
        sum = sum + a;  
        a += 2; 
        sum = sum + a;  
    }
    std::cout << sum << std::endl; 
    return sum; 
}

int main(){
    sum_multiples();
    return 0; 
}
