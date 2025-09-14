/*
    switch( expression ) {
        case value1:
            คำสั่ง...
            break; ไม่มีก็ได้
        case value2:
            คำสั่ง...
            break;
        case value3:
            คำสั่ง...
            break;
        default: ไม่มีก็ได้
            คำสั่ง...
            break;
    }

    *** value เป็นได้เเค่ integer, character
*/

#include <stdio.h>

int level;  //ประกาศตัวเเปร (Declare Global variable)

int main(){
    // int level;  //ประกาศตัวเเปร (Declare Local variable)

    printf("---------------------\n");
    printf(" Welcome Student\n");
    printf("---------------------\n");
    printf("Enter your level: ");
    scanf("%d", &level);
    printf("---------------------\n");

    switch (level){
        case 1:
            printf("Hello, You are a freshman\n");
            break;
        case 2:
            printf("Hello, You are a sophomore\n");
            break;
        case 3:
            printf("Hello, You are a junior\n");
            break;
        case 4:
            printf("Hello, You are a senior\n");
            break;
        default:
            printf("Hello, T_T\n");
            break;
    }

    printf("---------------------\n");
    return 0;
}