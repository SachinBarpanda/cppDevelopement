//Taylor series is 1+(x/1)+(x^2/2!)+.....x^n/n!;
//To do this we have to use STATIC VARIABLE which will not change at the time of calling 
#include <iostream>
using namespace std;
double taylor(int x, int n){
    static double p=1,f=1;
    double result;
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
    cout<<"Enter n to get e^n";
    cin>> n;
    cout<< taylor(n,10);
}