#include<iostream>
using namespace std;
int main(){
    int n ; 
    cin >> n ; 
    for(int i = 1 ; i <= n ; i++){
        int j ;
        for(j = n; j > i ; j--){
            cout<< " ";
        }
        for( ; j>=1 ; --j ){
            cout << j;
        }
        j=2;
        for(;j<=i;j++){
            cout<<j;
        }
        cout<< endl;
    }
}