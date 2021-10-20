#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    cout << sizeof(arr)<<endl;
    int N = 10;
    bool tArr[N];
    for(int i = 0 ; i < N ; i++){
        tArr[i] = false;
    }

    for(int i = 0 ; i < n ; i++){
        if(arr[i] >= 0){
            tArr[arr[i]] = true;
        }
    }
    for(int i = 0 ; i < N ; i++){
        if(tArr[i] == false){
            cout << i;
            break;
        }
    }
    
}