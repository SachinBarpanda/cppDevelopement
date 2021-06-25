#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n ;
    int count = 0;
    cin>>n;
    for(int i = 0;i<n;i++){
        int n = (int)pow(i,2);
        for(int j = 1;j<=n;j++){
           count++;
           cout<<count;
           
           if(count==9){
               count = 0;
           }
        }
        cout<<"\n";
    }
}