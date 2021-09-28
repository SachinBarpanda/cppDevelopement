#include<bits/stdc++.h>
using namespace std;
string deciToHexa(int n ){
    int a = 1, c= 0;
    int i = 0;
    string arr;
    int b , sum = 0 ;
    while(a<=n){
        a*=16;
        // cout<<"Value of a : " << a << endl;
    }
    a /= 16;

    while(a>0){
        b = n/a;
        n -= a*b;
        a /= 16;
        
        if( b >=0 && b<=9){
            arr += to_string(b);
            // cout<<"Value of arr : " << arr[i] << endl;
        }else{
            c = b - 10;
            arr.push_back('A'+c);
            // cout<<"Value of arr : " << arr[i] << endl;
        }
        i++;
    }
    return arr;
}
int main(){
    int n ; 
    cin >>n;
    cout<<deciToHexa(n);
}