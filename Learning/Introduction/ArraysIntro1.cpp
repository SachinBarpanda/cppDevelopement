//this is an introduction to the arrays in cpp
#include<iostream>
using namespace std;
int main(){
    int a[5];
    for (int i = 0; i < 5; i++){
        cout<<"the number is : "<< i <<" : "<<a[i]<<"\n";
    }
    a[0] = 1;
    a[1] = 2;
    
    //changing the values we get
    for (int i = 0; i < 5; i++){
        cout<<"the number is : "<< i <<" : "<<a[i]<<"\n";
    }
}