#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "aabcccbcababcbababcbabcaocoooopopoppoppopp";
    int arr[26];
    for(int i = 0 ; i < 26 ; i++){
        arr[i]= 0;
    }


    for(int i = 0 ; i < s.size(); i++){
        arr[s[i]-'a']++;
    }
    int max1 = 0;
    char maxi = 'a';
    for(int i = 0 ; i < 26 ; i++){
        if(arr[i] > max1){
            max1 = arr[i];
            maxi = i+'a';
        }
    }
    cout << maxi << " freq : " << max1;

}