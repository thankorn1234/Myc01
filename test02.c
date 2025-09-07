#include <stdio.h>

//การใช้ standard/built-in function ใน c ต้องรู้ว่าอยู่ใน library file (h.) อะไรเเล้วต้อง #include
//printf("????????");
//scanf("????",&???);

//'?' ใน c คือตัวอักษรตัวเดียว
//'????????????' ใน c คือข้อความ (ตัวอักษรตั้งเเต่ 0 ตัวขึ้นไป) (string/text)

int main(){
    printf("AAAAAAA");
    printf("%s BBBBBB %d", "CCC", 100);    //integer(int)
    printf("XYZ %f ^_^ %lf " , 150.45, 158.4567898); //float, double
    printf("ABCD %c %s", 'O', "OHHHHHH");

    return 0;
}