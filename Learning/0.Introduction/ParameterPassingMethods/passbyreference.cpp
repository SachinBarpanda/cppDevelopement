#include<stdio.h>
void swap(int& x , int&  y){//The references which are nothing but the copy is passed
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main(){
    int a , b ;
    a = 10;
    b = 20;
    swap(a,b);
    printf("%d, %d",a,b);//These copy will actually change the values of the actual parameters
}