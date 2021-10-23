#include<bits/stdc++.h>
using namespace std;
const int N = 10e5+2;
int tdp[N];

int fib(int n ){
    if(n == 0 ){
        return 0;
    }
    if (n == 1){
        return 0;
    }
    if (n == 2){
        return 1;
    }

    if(tdp[n] == -1){
        tdp[n] = fib(n-1) + fib(n-2);
        return tdp[n];
    }
    else{
        return tdp[n];
    }
}

int main(){
    int n ; 
    cin >> n;

    memset(tdp,-1,N);
    cout << fib(n);
}