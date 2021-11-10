#include<bits/stdc++.h>
using namespace std;
string repeating(string s){
    if(s.length() == 0){
        return "";
    }
    char curr = s[0];
    string ans = repeating(s.substr(1));
    if(curr == ans[0]){
        return ans;
    }
    else{
        return curr+ans;
    }
}

int main(){
    string s = "aaaaabbbbbeecdddd";
    cout << repeating(s);
    cout << endl;
}