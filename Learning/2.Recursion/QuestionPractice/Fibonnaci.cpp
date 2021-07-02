#include<iostream>
using namespace std;
//normal implementation of fibonnaci number
int fibonnaci(int n){
    if(n<=1){
        return n;
    }
    else{
        return fibonnaci(n-2)+fibonnaci(n-1);
    }
}

int main(){
    int n ;
    cin>>n;
    cout<<"The sum is : "<<fibonnaci(n);

}