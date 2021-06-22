#include<iostream>
using namespace std;
int main(){
    int a,rev;
    cin>>a;
    //reverse the number 
    while(a>0){
        rev = rev*10;
        rev = rev + (a%10);
        a=a/10;
    }
    cout<<rev;
}