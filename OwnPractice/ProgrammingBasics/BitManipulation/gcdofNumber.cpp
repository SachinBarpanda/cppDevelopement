#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 24 ;
    int b = 42;
    
    while (a!=b){
        int c = a;
        a = b - a;
        a= abs(a);
        b = c;
    }
    cout << a;
}