#include<bits/stdc++.h>
using namespace std;
bool isOk(int** arr, int x, int y ,int n){
    if(arr[x][y] == 1 && x<n && y<n){
        return true;
    }
    return false;
}
bool maze(int** arr, int x ,int y , int n , int** soln){
    
    if(x==n-1 && y==n-1){
        soln[x][y] = 1;
        return true;
    }
    
    if(isOk(arr,x,y,n)){
        soln[x][y] = 1;
        if(maze(arr,x+1,y,n,soln)){
            return true;
        }
        if(maze(arr,x,y+1,n,soln)){
            return true;
        }
        soln[x][y] = 0;
        return false;
    }
    return false;
    
}

int main(){
    int n = 5;
    int** arr = new int*[n];
    for(int i =0 ; i < n; i++){
        arr[i] = new int[n];
    }
    for(int i = 0 ; i<n;i++){
        for(int j = 0 ;j < n ; j++){
            cin >> arr[i][j];
        }
    }
// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 0 0 0 1 1
// 0 1 1 0 1
    int** solarr = new int*[n];
    for(int i =0 ; i < n; i++){
        solarr[i] = new int[n];
    }

    maze(arr,0,0,n,solarr);
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j< n ; j++){
            cout << solarr[i][j]<<" ";
        }
        cout <<endl;
    }
}