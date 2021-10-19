#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int start = 0, end = 0;
    int sum = arr[0];
    while(end!=sizeof(arr)){
        if(sum < k){
            end++;
            sum += arr[end];
        }else if (sum > k ){
            sum -= arr[start];
            start++;
        }else{
            break;
        }
    }
    cout << (end-start)+1 << endl;
    
}