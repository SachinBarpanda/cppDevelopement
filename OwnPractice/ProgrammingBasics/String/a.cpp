#include<bits/stdc++.h>
using namespace std;
int main(){
    string str; 
    // taking an input 
    getline(cin,str);
    str.append("that's it");
    cout << str << " ";

    string s1 = "6604";
    cout << stoi(s1)+4;//6608
    int i1 = 890;
    cout << to_string(i1)+"4";//8904
}