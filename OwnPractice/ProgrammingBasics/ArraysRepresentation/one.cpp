#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    cin >> n;
    int arr[n],arr2[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    cout << "sums are : ";
    for(int i = 0 ; i < n ; i++){
        int sum = 0;
        for(int j = i ; j < n ; j++){
            sum += arr[j];
            cout << sum << endl;
        }
        
    }
}