#include<bits/stdc++.h>
using namespace std;
void reverse(string s){
    if(s.size() == 0){
        return;
    }
    string leftStr = s.substr(1);
    reverse(leftStr);
    cout << s[0] <<" ";
    return;

}
int main(){
    string str;
    getline(cin,str);
    reverse(str);
}