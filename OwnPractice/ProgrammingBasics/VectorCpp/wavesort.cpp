#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {3,1,4,5,6,7,8,2,9,13};
    int n = 10;
    for(int i = 1 ; i < n-1 ; i+=2){
        if(arr[i]>arr[i-1]){
            swap(arr[i] , arr[i-1]);
        }
        if(arr[i]>arr[i+1] && (n==n-2)){
            swap(arr[i],arr[i-1]);
        }
    }
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}