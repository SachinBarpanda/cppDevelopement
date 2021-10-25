#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    cin >> n;
    char arr[n+1];
    cin >> arr;

    bool palindrome = true;
    int i = 0;
    while(arr[i] != '\0'){

        if(arr[i] == arr[n-1-i]){
            palindrome = false;
            break;
        }

        i++;
    }
    string s = (palindrome)?  "It's a palindrome" : "It's not a palindrome";
    cout << s;
}