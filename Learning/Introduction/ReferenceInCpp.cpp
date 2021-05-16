#include <iostream>
using namespace std;
int main(){
    int a = 10 ;
    int &r = a;//a's name is shared with r 
    cout<<a<<"\n";
    r++;
    cout<<a<<"\n";
    cout<<r<<"\n";
}