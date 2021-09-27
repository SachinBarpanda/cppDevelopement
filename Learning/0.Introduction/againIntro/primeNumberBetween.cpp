#include<iostream>
#include<math.h>
using namespace std;

int prime(int a , int b ){
    int count = 0 ;
    if(a<2) cout<<2<<" ,";
    for(int i = a ; i< b ; i++){
        bool flag = false;
        for(int j = 2; j<sqrt(b); j++){
            if(i%j ==0){
                flag = true;
            }
        }
        if(flag == false){
            cout<<i<<", ";
        }
    }
    return count;
}
int main(){
    int a , b;
    cin>>a>>b;
    cout<<prime(a,b);
}