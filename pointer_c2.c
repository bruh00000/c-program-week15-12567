#include <stdio.h>
int testPointer2(){
    int x = 20, deref;    // create a normal variable
    int *ptr;            // create a pointer variable
    ptr = &x;
    deref = *ptr;
    // Indirection or Dereferencing
    printf("Dereference");
    printf("Value of x : %d\n",x);              // Value of x : 20
    printf("Value of deref : %d\n",deref);      // Value of deref : 20
    printf("Address of x : %d\n", &x);            // address of x : 6422252
    printf("Address of deref : %d\n", &deref);    // address of derf : 6422248
    printf("Address of ptr : %d", &ptr);        // address of derf : 6422244
    return 0;
}