#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={5,-1,-3,4,8,-9};
    int current , maxSum = INT_MIN ;
    for(int i = 0; i < 6 ; i++){
        current += a[i];
        if(current<0){
            current = 0;
        }
        maxSum = max(maxSum,current);
    }
    cout << maxSum;

}