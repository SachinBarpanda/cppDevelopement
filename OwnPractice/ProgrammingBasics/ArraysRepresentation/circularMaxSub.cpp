#include<bits/stdc++.h>
using namespace std;
int kDane(int arr[], int n ){
    int sum = 0;
    int maxSum = INT_MIN;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i];
        if(sum < 0){
            sum = 0;
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int main(){
    int n;
    cin >> n ;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int maxSum;
    int noncircularSum = kDane( arr, n);

    int TotalSum = 0;
    for(int i = 0; i < n ; i++){
        TotalSum += arr[i];
        arr[i] = -(arr[i]);
    }

    int circularSum = TotalSum + kDane(arr,n);

    int ans = max(circularSum,noncircularSum);

    cout << ans;

}