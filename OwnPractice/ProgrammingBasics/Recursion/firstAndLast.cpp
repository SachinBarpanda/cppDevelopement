#include<bits/stdc++.h>
using namespace std;
void first(int arr[] , int n , int key, int i){
    if(n == i){
        return;
    }
    if(arr[i] == key){
        cout << i << " ";
        return;
    }
    first(arr,n,key,i+1);   
}

int lastocc(int arr[], int n , int key , int i){
    if(n == i){
        return -1;
    }
    if(lastocc(arr,n,key,i+1) != -1){
        return lastocc(arr,n,key,i+1);  
    }
    
    if(arr[i] == key){
        return i;
    }
    return -1;
}

int main(){
    int arr[] = {4,2,1,2,5,2,7};
    cout << "Starting";
    first(arr,6,2,0);
    cout << lastocc(arr,6,2,0) << endl;
    return 0;
}