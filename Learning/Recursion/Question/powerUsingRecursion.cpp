#include<iostream>
using namespace std;
int pow(int a, int b){
    if(b>0){
        return pow(a,b-1)*a;
    }else{
        return 1;
    }
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
   cout<< pow(a,b);
}