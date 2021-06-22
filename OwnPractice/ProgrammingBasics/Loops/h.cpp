#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}

int combination(int n, int r){
    int comb;
    comb = fact(n)/((fact(n-r))*fact(r));
    return comb;
}

int main(){
    //height-1 spaces 
    cout<<"Enter the height";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0; j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<" "<<combination(i-1,j);
        }
        cout<<"\n";
    }
}