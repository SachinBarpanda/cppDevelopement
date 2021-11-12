#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin >> t;
    while(t>0){
        int a , b,c;
        cin >>a>>b>>c;
        int min = INT_MAX;
        int prev = INT_MAX;
        int x = a+c ; int y = 2*b;
        while(true){
            
            if(min > prev){
                cout << prev << endl;
                break;
            }
            if(x>y){
                x--;
                y+=2;
            }
            else if(x< y){
                x++;
                y-=2;
            }
            else{
                cout << 0 <<endl;
                break;
            }
            prev = min;
            min = abs(y-x);
        }
        t--;
    }
}