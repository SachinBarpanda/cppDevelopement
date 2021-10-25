#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m ;
    n = 3;
    m = 4;

    int arr1[n][m]={{1,4,7,11},{2,5,8,12},{3,6,9,16}};
    int search = 11;
    for (int i = 0 ; i < n ; ){
        for (int j = m-1 ;  j < m ; ){
            if(arr1[i][j] == search){
                cout << i << " " << j << endl;
                i = n;
                break;
            }
            else if ( arr1[i][j] > search){
                j--;
            }else{
                i++;
            }
        }
    }
    cout << "NOTHING FOUND";

}