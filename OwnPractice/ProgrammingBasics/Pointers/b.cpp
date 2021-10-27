#include<bits/stdc++.h>
using namespace std;
void increment(int* a){
    ++a;
    *a = 5;
    
}

int main(){
    int a = 2;
    increment(&a);
    cout << a;
}