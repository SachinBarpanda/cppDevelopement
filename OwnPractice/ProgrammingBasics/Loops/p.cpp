#include<iostream>
using namespace std;
int main(){
    for(int i=0;i<3;i++){
        for(int j = 3-i;j>0;j--){
            cout<<" ";
        }
        for(int j = 0;j<(i*2+5);j++){
            cout<<"*";
        }
        for(int j = (5-(i*2));j>=0;j--){
            cout<<" ";
        }
        for(int j = 0;j<(i*2+5);j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int i = 0;i<10;i++){
        for(int j = 0;j<=i;j++){
            cout<<" ";
        }
        for(int j = (19-(i*2)) ; j>=0;j--){
            cout<<"*";
        }
        cout<<"\n";
    }
}