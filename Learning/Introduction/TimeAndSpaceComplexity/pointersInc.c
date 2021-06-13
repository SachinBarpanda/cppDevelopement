//Pointers helps in accessing the data from heap memory
#include <stdio.h>
int main(){
    int a = 10 ;
    int*p ;//same as a = 10;declaration
    p = &a;//p has address of a; initialisation
    printf("value of a %d\n",a);//10
    printf("value of p %d\n",p);//address of a
    printf("dereferencing p %d", *p);//10
}