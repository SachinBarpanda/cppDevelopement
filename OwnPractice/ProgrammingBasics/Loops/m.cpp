#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n ;
    int count = 0;
    cin>>n;
    for(int i = 1;i<=n;i++){
        int n1 = (int)pow(i,2);
        if(n1!=1){
            n1/=2;
        }
        for(int j = 0;j<n1;j++){
           count++;
           cout<<count;
           
           if(count==9){
               count = 0;
           }
        }
        cout<<"\n";
    }
}