#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    int k ;
    cin >> k ;
    int low = 0; int high = n-1;
    while(low < high){
        if((arr[low] + arr[high])> k ){
            high--;
        }else if((arr[low] + arr[high])< k){
            low++;
        }else{
            cout<<low << " " << high<<endl;
            break;
        }
    }
    if(low == high){
        cout << "Kat gaya chuhia";
    }
}