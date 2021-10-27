#include<bits/stdc++.h>
using namespace std;
void increment(int* a,int *b){
    (*a)++;
    // *a = 5;
    
}

int main(){
    int a = 2;
    int b = 4;
    increment(&a, &b);
    cout << a ;
}