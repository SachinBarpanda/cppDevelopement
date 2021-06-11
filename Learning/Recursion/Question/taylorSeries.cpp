//Taylor series is 1+(x/1)+(x^2/2!)+.....x^n/n!;
//To do this we have to use STATIC VARIABLE which will not change at the time of calling 
#include <iostream>
using namespace std;
int taylor(int x, int n){
    static int p=1,f=1;
    int result;
    if(n==0){
        return 1;
    }else{
        result = taylor(x,n-1);
        p = p*x;
        f = f*n;
        return result+p/f;
    }
}

int main(){
    int n ; 
    cin>> n;
    cout<< taylor(n,n);
}