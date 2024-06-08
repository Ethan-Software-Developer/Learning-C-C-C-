#include <stdio.h>

// & = And
// | = OR
// ^ = XOR
// << = Left shift
// >> = right shift
// 

int main(){

    int x = 6; // 6 = 00000110
    int y = 12; //12=000001100
    int z = 0; //0 =  0000000

    z = x & y;
    printf("And: %d\n", z);

      z = x | y;
    printf("OR: %d\n", z);

  z = x ^ y;
    printf("XOR: %d\n", z);


  z = x << 2;
    printf("Left Shift: %d\n", z);

  z = x >> 2 ;
    printf("Right Shift: %d\n", z);

    return 0;
}