#include<iostream>
using namespace std;
void func(int x){

    if(x>0){
        printf("%d ",x);
         func(x-1);
         func(x-1);
    }
    
}

int main(){
    int x ;
    cout<<"Enter the number you want to recurse : ";
    cin>>x;

    func(x);
}