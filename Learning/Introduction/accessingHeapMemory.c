#include<stdio.h>
int main(){
    int *p;//making a pointer which is just a variable
    
    p = (int) malloc(5*sizeof(int));//1. 5 is the size of array 
    //2. we give the compiler to decide the size-of the int 
    //3. then we type cast it to (int*)  at first place as it returns void 
    
    //Thus an array of size 5 is created in heap
    
}