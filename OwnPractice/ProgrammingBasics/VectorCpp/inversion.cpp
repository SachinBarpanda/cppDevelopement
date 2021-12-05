#include<bits/stdc++.h>
using namespace std;
int main(){
    //cond :  i < j  and arr[i] > arr[j] 
    int arr[8] = { 3,5,6,9,1,2,7,8};
    int num = 0 ;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0 ; i < n ; i++){
        for(int j = i+1 ; j < n ; j++){
            if(arr[i] > arr[j]){
                num++;
            }
        }
    }
    cout << num  << endl;
}