#include<bits/stdc++.h>
using namespace std;
int friendsget(int n ){
    if(n == 0 || n == 1 || n==2){
        return n;
    }

    return friendsget(n-1) + friendsget(n-2)*(n-1);

}

int main(){
    cout << friendsget(3)<<endl;
}