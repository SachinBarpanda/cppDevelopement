#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m ;
    n = 3;
    m = 4;

    int arr1[n][m]={{2,4,1,2},{8,4,3,6},{1,7,9,5}};
    int arr2[m][n]={{1,2,3},{4,5,6},{7,8,9},{4,5,6}};
    int arr3[n][m]={{0,0,0},{0,0,0},{0,0,0}};

    for(int i = 0 ; i < n ; i++){
        for(int k = 0 ; k < n ; k++){
            for(int j = 0; j < m ; j++){
                arr3[i][k] += (arr1[i][j] * arr2[j][k]);
            }
        }
    }

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
}