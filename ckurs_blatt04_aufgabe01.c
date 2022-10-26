#include <stdio.h>
#include <stdlib.h>
#include "input.h" 

int fibonacci(n){
    if(n < 2){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int n = lese_int(); 
    int f = fibonacci(n-1);
    printf("Fibonacci(%d) = %d\n" , n, f); 

    return 0; 
}
