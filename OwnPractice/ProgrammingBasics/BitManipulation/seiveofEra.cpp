#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 30; 
    int prime[100] = {0};
    for(int i = 2 ; i <= n; i++){
        if(prime[i] == 0){
            for(int j = pow(i,2); j < n ; j+=i){
                prime[j] = 1;
            }
        }
    }
    for(int i = 2 ; i< n ; i++){
        if(prime[i] == 0){
            cout << i << " ";
        }
    }
}