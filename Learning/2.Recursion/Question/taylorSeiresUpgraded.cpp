//let's store and resuse the multiplication values
#include <iostream>
using namespace std;

double taylor(int e ,int n){
    static double prev = 1;
    
    if(n==0){
        return prev;
    }else{
        prev = 1+ prev*e/n;
        return taylor(e, n-1);
    }

}
double taylorLoop(int x, int n){
    double S = 1.0;
    for(int i = n;i>0;i--){
        S = S * (double)(1+x/i);
    }
    return S;
}

int main(){
    cout << taylor(4,100);
}