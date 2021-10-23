#include<bits/stdc++.h>
using namespace std;
string task(int arr[] , int N){
    multiset<int>s;
    for(int i = 0 ; i < N ; i++){
        s.insert(arr[i]);
    }
    for(int i = 0 ; i < N ; i++){
        int curr = arr[i];
        if(s.count(curr+1)!=0){
            s.erase(s.find(curr));
            s.erase(s.find(curr+1));
        }
    }

    if (s.empty())
        return "YES";
    else{
        s.clear();
        return "NO";
    }

}


int main(){
    int N = 6;
    int arr[] = {1, 1, 2, 2, 2, 3};
    cout << task(arr,N);
}