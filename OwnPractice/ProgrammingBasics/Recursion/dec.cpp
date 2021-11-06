#include<bits/stdc++.h>
using namespace std;
void increasing(int n){
    if(n == 0){
        cout << 0 << " ";
        return;
    }
    increasing(n-1);
    cout << n << " ";
    return;

}
int decresing(int n){
    if(n == 0){
        return 0;
    }

    cout << n << " ";
    return decresing(n-1);

}
int main(){
    int n = 5;
    cout << decresing(n) << endl;
    increasing(n);

}