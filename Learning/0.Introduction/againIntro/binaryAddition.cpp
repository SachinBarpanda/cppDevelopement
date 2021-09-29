#include<bits/stdc++.h>
using namespace std;
int rev(int a){
    int ans = 0;
    while(a>0){
        int b = a % 10;
        ans = ans * 10 + b;
        a /=10;
    }
    return ans;
}

int binaryAddition(int a, int b ){
    int carry = 0;
    int ans = 0 ;
    while(a > 0 && b > 0){
        if(a%2 == 0 && b%2 == 0){
            ans = ans * 10 + carry;
            carry = 0;
        }else if((a%2 == 0 && b%2 ==1)||(a%2 == 1 && b%2 == 0) ){
            if (carry == 1){
                ans = ans * 10 + 0;
                carry = 1;
            }
            else{
                ans = ans * 10 + 1;
                carry = 0;
            }
        }
        else{
            ans = ans * 10 + carry ;
            carry = 1;
        }
        a /= 10;
        b /= 10;
    }
    while(a > 0 ){
        if(carry == 1 ){
            if(a%2 == 1){
                ans = ans * 10 + 0;
                carry = 1;
            }else{
                ans = ans * 10 + 1;
                carry = 0;
            }
        }
        else{
            ans = ans * 10 + (a%2);
        }
        a /= 10;
    }
    
    while(b > 0 ){
        if(carry == 1 ){
            if(b%2 == 1){
                ans = ans * 10 + 0;
                carry = 1;
            }else{
                ans = ans * 10 + 1;
                carry = 0;
            }
        }
        else{
            ans = ans * 10 + (b%2);
        }
        b /= 10;
    }
    if (carry == 1){
        ans = ans * 10 + 1;
    }
    ans = rev(ans);

    return ans;
}
int main(){
    int a, b ; 
    cin >>a>>b ; 
    cout<<binaryAddition(a, b);
}