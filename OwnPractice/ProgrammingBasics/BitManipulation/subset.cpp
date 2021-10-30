#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = { 3, 5, 7};
    for(int i = 0 ; i < (1 << 3) ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(i & (1<<j)){
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}