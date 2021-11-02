#include<bits/stdc++.h>
using namespace std;
int main(){
    int n = 40;
    int a = 5;
    int b = 7;

    int c1 = n / 5;
    int c2 = n / 7;
    int c3 = n /(7*5);

    cout << c1+c2-c3;
}