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
        int arr[n];
        for(int i = 0; i < n ; i++){
            cin >> arr[i];
        }
        int y = 2;
        int count = 2;
        for(int i = 1; i < n ; i++){
            int dif = arr[i-1] - arr[i];
            if((arr[i] - arr[i+1]) == dif){
                count++;
            }else{
                count = 2 ;
            }
            y = max(y,count);
        }
        


    cout <<"Case #"<<x<<": "<<y<<endl;
        t--;
    }
    
}