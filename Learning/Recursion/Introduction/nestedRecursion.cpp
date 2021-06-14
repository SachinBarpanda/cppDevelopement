#include<iostream>
using namespace std;
//it passes function parameter as a recursive call
int fun(int x){
    if(x>100){
        return x-10;
    }else{
        return fun(fun(x+11));
    }
}

int main(){
    int x;
    cin>>x;
    cout<<fun(x);
}