#include<iostream>
using namespace std;
int main(){
    int n, binary, prev = 0 ;
    int next = 0; 
    int a , b;
    cin >> n;
    int temp = n ;

    while(temp> 0 ){
        binary = temp % 2 ;
        prev = prev * 10 + binary;
        temp /= 2;
    }

    while(n > 0){
        //reverse
        a = n % 10;
        b = b * 10 + a;
        n /= 10;
    }
    cout << b;
}