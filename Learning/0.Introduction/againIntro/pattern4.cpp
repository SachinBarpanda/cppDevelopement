#include<iostream>
using namespace std;
int main(){

    int n, count = 1 ;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n-i+1 ; j++){
            cout<<j<<" ";
        }
        cout<<"\n";
        // count = 1;
    }
}