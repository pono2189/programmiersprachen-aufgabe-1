#include <iostream>

int main () {

    int x = 20; 
    
    while(true) {
        bool is_divisible = true;
        for (int counter = 1; counter <= 20; ++counter) {
            
            if (x % counter != 0){
                is_divisible = false;
                break;
            }

        }
 
            ++x;
        if (is_divisible == true) {
            std::cout << (x-1) <<" " << "ist durch alle Zahlen von 1 bis 20 teilbar \n";
            break;
        }
    }

    return 0;
}