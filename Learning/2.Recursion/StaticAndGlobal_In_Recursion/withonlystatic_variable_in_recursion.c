#include<stdio.h>
int func(int a ){
static int x = 0;
    if(a>0){
        x++;
        return func(a-1)+x;//only the last element i.e. 5 is added to all the numbers
    }
}

int main(){
    int a = 5;
    printf("%d ", func(a));
}