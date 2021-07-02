#include<stdio.h>
void fun1(int x ){
    if(x>0){
        printf("%d ",x);//here 3 2 1 will be produce because the print statement is before 
        fun1(x-1);      //the function calling
    }
}
int main(){
    int x = 3;
    fun1(3);
}