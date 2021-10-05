#include<bits/stdc++.h>
using namespace std;
int binary_search(int n , int arr[] , int key){
    int mid = n/2;
    int count = n/2;
    if(arr[0] == key){
        return 0;
    }
    while(true && mid!=0 ){
        if(key==arr[count]){
            return count;
        }
        if(key<arr[count]){
            count -= mid/2;
            mid = mid/2;
        }
        if(key>arr[count]){
            count +=mid/2;
            mid = mid/2;
        }
    }
    return -1;
}
int main(){
    int n ;
    cin >> n;
    int arr[n] ;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int key = 0;
    cin>>key;
    cout<<"position is at: " << binary_search(n, arr,key);
}
