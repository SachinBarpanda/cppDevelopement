#include <stdio.h>

int add(int a , int b/*these are the formal parameters*/){//this is called the prototype
    int c = a + b;
    return c;
}

int main(){
    int x,y,z;
    x = 5;
    y = 8;
    z = add(x,y/*these are the actual parameters*/);
    printf("Value of z is %d",z);
}