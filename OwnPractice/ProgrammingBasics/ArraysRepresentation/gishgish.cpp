#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }
    int max = INT_MIN; 
    for(int i = 0 ; i < n ; i++){
        if (arr[i] > max ){
            max = arr[i];
        }else{
            arr[i] = max;
        }
    }
    cout << endl;
    for(int k = 0 ; k < n ; k++){
        cout << arr[k]<<" ";
    }
}