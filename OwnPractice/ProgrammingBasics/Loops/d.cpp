#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first,beforeFirst, last;
    last = n%10;
    while(n>0){
        first = beforeFirst;
        n = n/10;
        beforeFirst = n;
    }
  
    cout <<"first "<<first<<" last "<<last;

}