#include<stdio.h>
int x = 0;
int func(int a ){

    if(a>0){
        x++;
        return func(a-1)+x;//global variables are working in the same way in this case
    }
}

int main(){
    int a = 5;
    printf("%d ", func(a));
}