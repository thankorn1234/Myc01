/*
    - no parameter no return
*/

#include <stdio.h>

void showHi(); //Declare function

void showHello(){
    showHi();
    printf("Hello...\n");
}

int main(){
    printf("Wow...\n");
    showHello();
    showHello();
    showHi();

    return 0;
}

void showHi(){
    printf("Hi...\n");
}
