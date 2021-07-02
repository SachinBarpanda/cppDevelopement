#include <iostream>
using namespace std;
//The recursive is done by using other function and not the same function.
void funcB(int n);

void funcA(int n){
    if(n>0){
        cout<<"in funcA we have : "<<n<<endl;
        funcB(n-1);
    }
}
void funcB(int n ){
    if(n>1){
        cout<<"int funcB we have : "<<n<<endl;
        funcA(n/2);
    }
}

int main(){
    int x ;
    cin>>x;
    funcA(x);
}