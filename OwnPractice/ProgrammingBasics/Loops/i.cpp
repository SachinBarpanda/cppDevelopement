#include<iostream>
using namespace std;


int main(){
    //height-1 spaces 
    cout<<"Enter the height";
    int n;int coef;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=1; j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            if(i==0||j==0){
                coef = 1;
            }else{
                coef = coef*(i-j+1)/j;
            }
            cout<<" "<<coef;
        }
        cout<<"\n";
    }
}