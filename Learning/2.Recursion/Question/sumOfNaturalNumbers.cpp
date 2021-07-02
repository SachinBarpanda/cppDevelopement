#include<iostream>
using namespace std;
int sumfun(int n){
    int sum = 0;
    if(n>0){
        return n+sumfun(n-1);
    }
    return 0;
}


int main(){
    int n ;
    cin>>n;
    cout<<sumfun(n);
}