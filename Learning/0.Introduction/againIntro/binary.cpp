#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, binary, prev = 0 ; 
    int a , b=0;
    cin >> n;
    int temp = n ;
    int run = log2(n);
    int run1 = log2(n);
    while(run1>=0 ){
        binary = temp % 2 ;
        prev = prev * 10 + binary;
        temp /= 2;
        run1--;
    }
    while(run>=0){
        //reverse
        a = prev % 10;
        b = b * 10 + a;
        prev /= 10;
        run--;
    }
    cout << b;
}