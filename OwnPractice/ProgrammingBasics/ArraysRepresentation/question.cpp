#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, cost ; 
    cout << " amount of money : " ;
    cin >> n ;
    cout << " Cost of chocolate : " ;
    cin >> cost;
    int number = n/cost;
    int wrappers = number;

    cout<< wrappers;
    for(int i = 3 ; i <= wrappers ; i += 3){
        number++; 
        wrappers +=1;
    }
    cout << "Total chocolates : " << number;
}