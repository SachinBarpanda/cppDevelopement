#include<bits/stdc++.h>
using namespace std;
void generate(string s, string ans){
    if(s.length() == 0){
        cout << ans << " " << endl;
        return;
    }
    char c = s[0];
    int ci = c;
    string sub = s.substr(1);

    generate(sub,ans);
    generate(sub,ans+c);
    generate(sub,(ans+to_string(ci)));

}
int main(){
    int n ;
    generate("AB","");

}