#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int x = 0;
    cin >> t;
    while(t>0){
        x++;
        int n = 0;
        cin >> n;
        int arr[n+1];
        for(int i = 0; i < n ; i++){
            cin >> arr[i];
        }
        int y = 0;
        int max = 0;
        arr[n] = -1;
        for(int i = 0 ; i <= n ; i++){
            if(n==1){
                y+=1;
                break;
            }
            if(arr[i] > max ){
                max = arr[i];
                if(arr[i+1]<max){
                    y++;
                }
            }
        }
        
        cout <<"Case #"<<x<<": "<<y<<endl;
        t--;
    }
    
}