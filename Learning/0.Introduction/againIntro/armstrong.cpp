#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,copyN,a,b ;
    cin >> n;
    copyN = n;
    while(n>0){
        a = n%10;
        b += pow(a,3);
        n /= 10;
    }
    if(b == copyN){
        cout<<"Armstrong number ";
    }else{
        cout<<"Not Armstrong number";
    }
}