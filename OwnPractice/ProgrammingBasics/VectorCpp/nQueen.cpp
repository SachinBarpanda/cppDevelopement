#include<bits/stdc++.h>
using namespace std;
bool isSafe(int** arr, int i, int j){
    if(arr[i][j] == 0){
        return false;
    }
    return true;
}
void nqueen(int** arr , int n , int x , int y){
    if(x == n-1 && y == n-1){
        return ;
    }

    if(isSafe(arr,x,y)){
        for(int i = 0 ; i < n ; i++){
            if(i==x){
                for(int j = 0 ; j < n ; j++){
                    arr[]
                }
            }
            
        }
    }
} 

