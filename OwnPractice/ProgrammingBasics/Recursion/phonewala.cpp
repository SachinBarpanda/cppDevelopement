#include<bits/stdc++.h>
using namespace std;
string arr[] = {"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv" , "wxyz"};
void keypad (string s , string ans){
    if(s.length() == 0){
        cout<<ans<<endl;
        return;
    }

    char c = s[0];
    string x = arr[c-'0'];
    string ros = s.substr(1);

    for(int i = 0 ; i< x.length() ; i++){
        keypad(ros, x[i]+ans);
        
    }
}
int main(){
    keypad("234","");
}