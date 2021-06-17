#include <iostream>
using namespace std;
int main(){
    int cnum;
    cin>>cnum;
    if(cnum%2!=0){
        cout<< cnum*3+1;
    }else{
        cout<< cnum/2;
    }
}