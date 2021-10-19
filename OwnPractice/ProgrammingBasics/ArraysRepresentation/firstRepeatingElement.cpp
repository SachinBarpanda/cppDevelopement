#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    cin >> n;

    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    const int N = 1000;
    int arrInd[N];
    memset(arrInd, -1 , sizeof(arrInd));
    int minSet = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(arrInd[arr[i]] == -1){
            arrInd[arr[i]] = i;
        }else{    
            minSet = min(minSet,arrInd[arr[i]]);
        }
    }
    cout << minSet+1;

}