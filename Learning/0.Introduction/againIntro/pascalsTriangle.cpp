#include<iostream>
using namespace std;
int main(){
    int n ; 
    int coef ;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        int num = i-1;int dem = 1;
        for( int j = 1 ; j <= n ; j++){
            
            if ( j <= n-i){
                cout<<" ";
            }else{
                if(j==(n-i+1)|| (j==n)){
                    coef = 1;
                    cout<<coef<<" ";
                }else{
                    coef = (coef * num)/dem;
                    num--;dem++;
                    cout<<coef<<" ";
                }
            }
        }
        cout<<endl;
    }
}