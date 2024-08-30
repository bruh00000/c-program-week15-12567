#include <stdio.h>
int testPointer3(){
    int num = 10; //Declare integer variable number
    int *ptr;     //Declare pointer to store address of number
    printf("Value of num = %d\n", num);                //Print the value of num = 3
    printf("Address of num = %d\n", &num);             //Address of num using & (Ampersand) operator = 6422252
    printf("Address stored in ptr = %d\n", ptr);       //Address stored in ptr = 000001F
    printf("Dereference value of *ptr = %d\n", *ptr);  //Dereference value of *ptr = 10
    *ptr = 6;
    printf("Dereference value of *ptr = %d\n", *ptr);
    printf("Value of number = %d\n",num);

    *ptr = 20;
    printf("Dereference value of *ptr = %d\n", *ptr);
    printf("Value of number = %d\n",num);
    
}