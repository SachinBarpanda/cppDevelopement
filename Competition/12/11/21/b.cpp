#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t;
    while(t>0){
        int a , b,c;
        cin >>a>>b>>c;
        int x = a+c ; int y = 2*b;
        int x1 = 0;
        if(x>y){
             x1 = x-y;
        }else if(x< y){
            x1 = y -x;
        }else{
            x1 = x - y;
        }
        if(x1==0){
            cout << 0 << endl;
        }else if(((x1)% 2) == 0){
            cout << 0 << endl;
        }else{
            cout << 1 << endl;
        }
        
        t--;
    }
}