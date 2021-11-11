#include<bits/stdc++.h>
using namespace std;
string sidex(string str){

    if(str.length() == 0){
        return "";
    }

    char check = str[0];
    string s = sidex(str.substr(1));
    if(check == 'x'){
        s = s+check;
        return s;
    }else{
        return check+s;
    }
}
int main(){
    cout<< sidex("aaxxbxbxxbxmx");
    cout<<endl;
}