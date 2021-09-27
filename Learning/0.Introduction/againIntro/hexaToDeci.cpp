#include<bits/stdc++.h>
using namespace std;
int hexaToDeci(string n){
    int b = 0;
    int count = 0;
    int size = n.size();
    for(int i = size-1; i>=0 ; i--){
        if(n[i]>='0' && n[i] <='9'){
            b += (n[i]-'0')*(pow(16,count));
        }
        else if(n[i]>='A' && n[i]<='F'){
            b += ((n[i]-'A')+10)*pow(16,count);
        }
        count ++;
    }
    return b;    
}

int main (){
    string n ;
    cin >> n ;
    cout << hexaToDeci(n);
}