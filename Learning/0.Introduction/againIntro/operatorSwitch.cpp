#include<iostream>
using namespace std;
int main(){
    int x , y;
    cin >> x >> y;
    char op;
    cin >> op;

    switch(op){
        case '+' : 
        cout<< x + y ;
        break;

        case '-':
        cout<< x - y;
        break;

        case '*':
        cout<< x * y;
        break;

        case '/':
        cout<<x/y;
        break;

        default:
        cout<<"Enter a valid operand";
        break;
    }

}