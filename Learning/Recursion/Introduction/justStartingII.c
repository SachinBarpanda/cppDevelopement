#include<stdio.h>
void fun1(int x ){
    if(x>0){
        fun1(x-1);      
        printf("%d ",x);//here 1 2 3 will be produce because the print statement is after
        //the function calling
    }
}
int main(){
    int x = 3;
    fun1(3);
}