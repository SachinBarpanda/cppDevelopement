#include<bits/stdc++.h>
using namespace std;
void print(int** arr,int n){

    cout << "Iteration : "<<endl;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << arr[i][j];
        }
        cout<<endl;
    }
}
bool isSafe(int** arr, int x,int y,int n ){
    
    for(int i = 0 ; i < n ; i++){
        if (arr[i][y] == 0){
            return false;
        }
    }

    int row = x;
    int col = y;
    while(row >= 0 && col >=0 ){
        if(arr[row][col] == 0){
            return false;
        }
        row--;
        col--;
    }

    row = x;
    col = y;
    while(row >= 0 && col < n){
        if(arr[row][col] == 0){
            return false;
        }
        row--;
        col++;
    }

    return true;
}
bool nqueen(int** arr , int n , int x){
    if(x >= n){
        return true;
    }

    for(int y = 0 ; y < n ; y++){
        if(isSafe(arr,x,y,n)){
            arr[x][y] = 0;
            print(arr,n);
            if(nqueen(arr, n, x+1)){
                return true;
            }else{
                arr[x][y] = 1;
            }    
        }        
    }
    return false;
} 

int main(){
    int n ;
    cin >> n;
    int** arr = new int*[n];
    for(int i =0 ; i < n; i++){
        arr[i] = new int[n];
    }
    for(int i = 0 ; i<n;i++){
        for(int j = 0 ;j < n ; j++){
            cin >> arr[i][j];
        }
    }
    nqueen(arr,n,0);
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << arr[i][j];
        }
        cout<<endl;
    }
}
/*

1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1

*/


