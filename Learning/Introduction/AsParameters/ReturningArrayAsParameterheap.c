//here we will be returning the array of the parameter
#include <stdio.h>
#include <stdlib.h>
int* func(int size){//int* will return the address of the array
    int * p = (int* )malloc (size*sizeof(int));
    p[0] = 2;
    p[1] = 3;
    return p;
}
int main(){
    int *p;
    p = func(5);
    for(int i = 0 ; i<5;i++)
    printf("%d ",p[i]);
}