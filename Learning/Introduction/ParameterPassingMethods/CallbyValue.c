#include<stdio.h>
void swap(int x , int  y){
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
    printf("%d, %d",a,b);//In pass by value the value is passed and nothing is changed 
    //It will  change when there will be a return parameter.
}