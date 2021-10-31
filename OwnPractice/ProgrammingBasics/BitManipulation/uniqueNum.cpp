#include<bits/stdc++.h>
using namespace std;
int getBit(int n, int pos){
    return (n & (1<<pos))!=0;
}

int main(){
    int arr[] = {2, 4, 6, 3, 7, 4, 6,2};
    int xorSum;
    for (int i = 0; i < 8 ; i++){
        xorSum = xorSum ^ arr[i];
    }
    int newXorUse = xorSum;
    int set = 0;
    int pos = 0;
    
    while(set != 1){
        set = xorSum & 1;
        pos++;
        xorSum = xorSum >> 1;
    }

    int newXor1 = 0;
    for (int i = 0; i< 8 ; i++){
        if(getBit(arr[i], pos-1)){
            newXor1 = newXor1 ^ arr[i];
        }
    }
    int newXor2 = newXor1 ^ newXorUse;
    cout << newXor1 << " " << newXor2;
}