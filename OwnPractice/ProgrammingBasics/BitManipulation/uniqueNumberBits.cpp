#include<bits/stdc++.h>
using namespace std;
int getBit(int arr , int pos ){
    return (arr & (1<<pos));
}

int setBit(int arr, int pos){
    return (arr | (1 << pos));
}

int main(){
    int arr[64];
    int n = 10;int result = 0;
    int arr1[n] = {1,3,2,3,4,2,1,1,3,2};
    for(int i = 0 ; i < 64 ; i++){
       arr[i] = 0;
    }   

    for(int i = 0 ; i < 64 ;i++){
        int sum = 0 ;
        for(int j = 0 ; j < n ; j++){
            if(getBit(arr1[j], i) != 0 ){
                sum++;
            }
        }
        if(sum%3 != 0){
            result = setBit(result, i);
        }
    }
    cout << result;
}