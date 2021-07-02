#include<stdio.h>
int func(int a ){

    if(a>0){
        
        return func(a-1)+a;//eleements from the last calls are added sequentially,
       
    }
}

int main(){
    int a = 5;
    printf("%d ", func(a));
}