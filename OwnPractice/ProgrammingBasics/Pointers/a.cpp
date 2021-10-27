#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 10;
    int *ptr ;
    // cout << a << " ";
    // cout << ptr << " ";
    // cout << &ptr << " ";
    // cout << *ptr;

    // cout << endl;
    ptr = &a ;
    // cout << a << " ";
    // cout << ptr << " ";
    // cout << &ptr << " ";
    // cout << *ptr;
    
    cout << *ptr << endl;
    int arr[] = { 1,2,3};
    
    ptr = arr;
    for(int i = 0 ; i < 3; i++){
        cout << *(arr+i) << " ";
    }
    int **q = &ptr;
    cout << *ptr << endl;
    cout << **q;

    
    
}