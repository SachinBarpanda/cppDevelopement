#include<iostream>
using namespace std;
int main(){
    int s ;
    double cost;
    cin>>s;
    if(s>0 && s<=100){
        cost = 5.0;
    }else if(s>100 && s<=500){
        cost = 8.0;
    }else if(s>500 && s<1000){
        cost = 10.0;
    }else if(s>1000){
        cost = 12.0;
    }
    cout<<"cost is : "<<cost;
}