#include <bits/stdc++.h>
using namespace std;
int deciToOcta(int a){
    int b = 1, c =0 , ans=0;
    while (b <= a){
        b *= 8;
        cout<<"Value of b : " << b << endl;
    }
    b /= 8;
    cout<<"Value of b : " << b << endl;
    while (b > 0){
        c = a / b;
        a -= b * c;
        b /= 8;
        ans = ans * 10 + c;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    cout << deciToOcta(n);
}