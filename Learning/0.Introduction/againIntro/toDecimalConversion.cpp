#include<iostream>
#include<math.h>
using namespace std;
int convert(int a ){
    int b,real=0,count = 0;
    while(a>0){
        b = a % 10;
        real += b*pow(8,count);
        count++;
        a /=10; 
    }
    return real;
}
int main(){
    int octa = 0;
    cin >> octa;
    cout<<convert(octa);
}