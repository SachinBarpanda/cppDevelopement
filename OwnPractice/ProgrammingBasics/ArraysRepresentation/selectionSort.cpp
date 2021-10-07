#include<bits/stdc++.h>
using namespace std;

void sort(int arr[] , int n){
    for(int i = 0 ; i < n-1; i++){
        for(int j = i+1 ; j < n ; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                    cout << " Now the array is like this : ";
                    for(int i = 0 ; i < n ; i++){
                        cout <<arr[i]<<" ";
                    } 
                    cout<<endl;
            }
        }
    }
    cout << "Sorted array : ";
    for(int i = 0 ; i < n ; i++){
        cout <<arr[i]<<" ";
    } 
}

int main(){
    int n ; 
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    sort(arr, n );
}