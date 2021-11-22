#include<bits/stdc++.h>
using namespace std;
void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l , int r){
    int pivot = arr[r];
    int i = l;
    for(int j = l ; j < r ; j++){
        if(arr[j]<pivot){
            
            swap(arr, i, j);
            i++;
        }
    }
    swap(arr, i, r);

    cout << "Iteration CHecking : ";
    for(int i = 0 ; i < 8 ; i++){
        cout<< arr[i] << " ";    
    }
    cout << "pi : " <<r<<endl;
    return i;
    
}

void quickSort(int arr[], int l, int r){
    
    if(l<r){
        int pivot = partition(arr,l,r);
        quickSort(arr,l,pivot-1);
        quickSort(arr,pivot+1,r);
    }
}
int main(){
    int arr[] = {5,4,7,8,3,6,2,1};
    quickSort(arr, 0, 7);
    for(int i = 0 ; i < 8 ; i++){
        cout<< arr[i] << " ";    
    }
    cout <<endl;
}