#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "9342823487";
    sort(s.begin(), s.end(), greater<int>());//decending
    cout <<s;
}