#include<bits/stdc++.h>
using namespace std;

int multipleGet(int p , int n ){
    if(n == 0){
        return 1;
    }
    int prev = p * multipleGet(p,n-1);
    return prev;

}

int getSum(int n){
    if ( n == 0){
        return 0; 
    }
    int prev = n + getSum(n-1);
    return prev;
}

int main(){
    int n , p;
    cin >> p >> n ;
    cout << multipleGet(p,n) << endl;
}