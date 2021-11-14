#include<bits/stdc++.h>
using namespace std;
int destiny(int n, int i , int j){

    if(i==n-1 && j == n-1 ){
        return 1;
    }
    if(i > n-1 || j > n-1){
        return 0;
    }

    return destiny(n,i+1,j)+destiny(n,i,j+1);
}

int main(){
    cout << destiny(2,0,0) << endl;
}