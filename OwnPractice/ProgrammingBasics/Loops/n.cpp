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
}