# include <iostream>

int main(){
    return 0;     
}

int factorial (int a){
    int sum = 0;
    if (a =! 1){
        sum = a*(a-1);
        factorial(a-1);
    }
    else{ 
        return sum; 
    }
   
}