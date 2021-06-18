#include<iostream>
using namespace std;
int main(){
    int number = 4;
    double alpha = 1.0;
    if (number > 0){
        if (alpha > 0){
            cout << "Here I am!" << endl;//this will print
        }
    }
    else{
        cout << "No, I’m here!" << endl;
    }
    cout << "No, actually, I’m here!" << endl;//this will print too
}