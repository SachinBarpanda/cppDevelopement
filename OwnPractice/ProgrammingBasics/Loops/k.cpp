#include<iostream>
using namespace std;
int main(){
    int x, y;
    for(int i = 0;i<9;i++){
        x=1;y=2;
        for(int j = 0;j<=i;j++){
            if(i%2==0){
                cout<<x;
                x+=2;
            }else{
                cout<<y;
                y+=2;
            }
        }
        cout<<"\n";
    }
}