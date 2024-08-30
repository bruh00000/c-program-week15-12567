#include <stdio.h>
int testAddress(){
    int a = 5;
    printf("Value of normal variable : %d\n" , a); //5
    printf("Address of normal variable : %d\n" , &a); //6422252
    printf("Address of normal variable : %x\n" , &a); //61feec
    printf("Address of normal variable : %p\n" , &a); //0061FEEC
    return 0; 
}
