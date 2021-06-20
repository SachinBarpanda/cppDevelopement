#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int bigger,smaller ;
    if(a>b){
        bigger = a;
        smaller = b;
    }else if(b>a){
        smaller = a;
        bigger = b;
    }
    
    cout<<smaller<<" b:"<<bigger;
    for(int i=smaller;i>=0;i--){
        
        if(bigger%i==0 && smaller%i==0){
            cout<<"The HCF is :"<<i;
            break;
        }
    }
}