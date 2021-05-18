#include<stdio.h>
void swap(int* x , int*  y){//dereferencing is used to get the values
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a , b ;
    a = 10;
    b = 20;
    swap(&a,&b);//The addresses are passed
    printf("%d, %d",a,b);
}