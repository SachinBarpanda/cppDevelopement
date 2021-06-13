//Fibonnaci using memoization
#include<iostream>
using namespace std;
//we will create a global array to store the array of the variables
int n;
int arr[10000] ;
int fibonnaci(int n){
    if(n<=1){
        if(arr[n] == -1){
            arr[n] = n;
        }            
        return arr[n];
    }else{
        if(arr[n-2] == -1){
            arr[n-2] = fibonnaci(n-2);
        }

        if(arr[n-1] == -1){
            arr[n-1] = fibonnaci(n-1);
        }

        return arr[n-2]+arr[n-1];
    }
}

int main(){
    cin>>n;
    for(int i = 0 ; i<n;i++){
        arr[i] = -1;
    }
    cout<<fibonnaci(n);
}