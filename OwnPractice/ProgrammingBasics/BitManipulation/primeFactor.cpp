#include<bits/stdc++.h>
using namespace std;
void primeFactor(int n){
    int spf[100] = {0};
    for(int i = 2; i <= n ; i++){
        spf[i] = i;
    }
    for(int i = 2 ; i <= n ; i++){
        if(spf[i] == i){
            for(int j = pow(i,2); j <= n ; j+=i){
                if(spf[j] == j){
                    spf[j] = i;
                }
            }
        }
    }

    while(n!=1){
        cout << spf[n] << " ";
        n = n / spf[n];
    }
}
int main(){
    primeFactor(42);

}