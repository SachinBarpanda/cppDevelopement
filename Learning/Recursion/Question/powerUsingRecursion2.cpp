//we can take another approach in doing this
//multiply the one with themselves to reduce complexity
#include<iostream>
using namespace std;
int pow(int a, int b){
    if(b>0){
        //if even then multiply directly
        if(b%2==0){
            return pow(a*a,b/2);
        }
        //if odd then multiply it once separately
        else{
            return a*pow(a*a,(b-1)/2);
        }

    }else{
        return 1;
    }
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
   cout<< pow(a,b);
}