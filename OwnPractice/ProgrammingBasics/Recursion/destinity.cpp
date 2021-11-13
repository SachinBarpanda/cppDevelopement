#include<bits/stdc++.h>
using namespace std;
int destiny(int s ,int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count = 0;
    for(int i = 1 ; i <= 6 ; i++){
        count = count + destiny(s+i , e);
    }
    
    return count ;
}
int main(){
    cout<<destiny(0,3)<<endl;
}