#include <bits/stdc++.h>
using namespace std;
int decimal(int n){
    int a=1,c=0;
    while (a <= n){
        a *= 2;
    }
    a /= 2;
    while(a>0){
        int b = n/a;
        n -= a*b;//0
        a /=2;//1
        c = c*10+b;//101
    }
    return c;
}
int main()
{
    int n;
    cin >> n;
    cout<<decimal(n);
}