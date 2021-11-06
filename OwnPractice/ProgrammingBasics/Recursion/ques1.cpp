#include<bits/stdc++.h>
using namespace std;
bool checkSort(int arr[], int n){
    if(n==1){
        return true;
    }
    bool interSave = checkSort(arr+1, n-1);
    return (arr[0]<arr[1] && interSave); 
}
int main(){
    
    int n  = 5;
    int arr[] = {4, 6, 7, 9 , 1};
    cout << checkSort(arr,n) << endl;

}