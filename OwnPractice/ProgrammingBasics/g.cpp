#include<iostream>
using namespace std;
int main(){
    int y ;
    cout<<"Please enter the year";
    cin>>y;
    if(y%4==0){
        if(y%100==0){
            if(y%400==0){
                cout<<"IT's a leap year";
            }else{
                cout<<"It's not a leap year";
            }
        }else{
            cout<<"It's a leap year";
        }
    }else{
        cout<<"It's not a leap year";
    }
}