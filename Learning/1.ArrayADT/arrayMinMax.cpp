#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    int min = INT_MAX, max = INT_MIN;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i< n ; i++){
        cin >> arr[i];
    }
    for ( int i = 0 ; i < n ; i++){
        if(min>arr[i]){
            min = arr[i];
        }
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout<< "Max : " << max << " Min : " << min;
}