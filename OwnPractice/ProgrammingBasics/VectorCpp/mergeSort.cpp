#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int right , int mid , int left){
    int x = mid-right+1;
    int y = left - mid;

    int arr1[x];
    int arr2[y];

    for(int i = 0 ; i < x ; i++){
        arr1[i] = arr[right+i];
    }
    for(int i = 0 ; i < y ; i++){
        arr2[i] = arr[mid+i+1];
    }

    int i = 0 ;
    int j = 0;
    int k = right;
    while(i < x && j < y){
        if(arr2[j] > arr1[i]){
            arr[k] = arr1[i];
            i++;
        }else{
            arr[k] = arr2[j];
            j++;
        }
        k++;
    }
    
    while(i<x){
        arr[k] = arr1[i];
        i++;k++;
    }
    
    while(j< y){
        arr[k] = arr2[j];
        k++;j++;
    }

    cout << "Iteration CHecking : ";
    for(int i = 0 ; i < 8 ; i++){
        cout<< arr[i] << " ";    
    }
    cout << endl;
}


void mergeSort(int arr[] , int right, int left){
    if(right<left){
        int mid = (right+left)/2;
        mergeSort(arr, right, mid);
        mergeSort(arr, mid+1, left);
        merge(arr , right , mid , left);
    }
    return;
}

int main(){
    int arr[] = {5,4,7,8,3,6,2,1};
    mergeSort(arr, 0, 8);
    for(int i = 0 ; i < 8 ; i++){
        cout<< arr[i] << " ";    
    }
    cout <<endl;
    
}