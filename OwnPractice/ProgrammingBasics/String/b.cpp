#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "thisishowwemeet";
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
}