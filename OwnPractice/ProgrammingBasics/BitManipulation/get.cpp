#include<bits/stdc++.h>
using namespace std;
int  updateBit(int n , int pos , int value){
    int mask = ~(1 << pos);
    n = n & mask;
    return (n|(value<<pos));
}

int main(){
    // Get Bits
    int position = 2;
    int n = 5;
    int shift = 1 << position;
    int andOperator = (n & shift);
    
    //set Bits 

    position = 1;
     n = 5;
     shift = 1 << position;
    int OrOperator = (n | shift);
    cout << OrOperator;

    //clear bits

    position = 2;
    shift = 1 << position;
    int alter = ~shift; 
    int clear = alter & n;
    cout << clear;

    //update bit
    n = 5;
    int pos = 1;
    int value = 1 ;
    cout << updateBit(n, pos , value);
}