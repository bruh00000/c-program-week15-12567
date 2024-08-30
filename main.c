#include <stdio.h>
#include "testAddress.c"
#include "pointer_c1.c"
#include "pointer_c2.c"
#include "pointer_c3.c"
#include "pointer_array.c"

int count(int counter){
    int ct = counter;
    for (int i = 0; i <= ct; i++)
    {
        printf("=");
    }
    printf("\n");
    return 0;
}


void main(){
    int number = 30;
    printf("Pointer variable in c-programing\n");
    count(number);
    //testAddress();
    //testPointer();
    //testPointer2();
    //testPointer3();
    testPtrAndArray();
}

