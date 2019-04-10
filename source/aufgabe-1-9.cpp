#include <iostream>

int main() {
    return 0;
}
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
 