#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n;j>=(n-i);j--){
            cout<<j;
        }
        for(int j=2*(n-1);j>2*(i);j--){
            cout<<n-i;
        }
        for(int j=i;j>0;j--){
            cout<<n-(j-1);
        }
        cout<<"\n";
    }
    
    for(int i=1;i<n;i++){
        for(int j=n;j>=(i+1);j--){
            cout<<j;
        }
        for(int j=1;j<(i*2);j++){
            cout<<i+1;
        }
        for(int j=i+1;j<=n;j++){
            cout<<j;
        }
        cout<<"\n";       
    }
}




