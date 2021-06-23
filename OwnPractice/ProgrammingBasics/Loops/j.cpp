#include<iostream>
using namespace std;
int main(){
    int count = 0 ;
    int size;
    cout<<"Enter the size : ";
    cin>>size;
    for(int i=0;i<size;i++){
        for(int j=0;j<=i;j++){
            count++;
            cout<<count<<" ";
        }
        cout<<"\n";
    }
}