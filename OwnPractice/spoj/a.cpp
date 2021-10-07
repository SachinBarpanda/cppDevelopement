#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t>0){
        int a , b;
        cin >> a >> b;
 
        if(a<=2)
            a = 2;
        while(a<=b){
            int flag = 0;
            int count = 2;
            
            while(count <= sqrt(a)){
                if(a%count == 0){
                    flag = 1;
                    break;
                }
                count++;
            }   
            if(flag == 0 ){
                cout<< a<<endl;
            }        
            a++;
        }
        t--;
        cout << endl;
    }
} 