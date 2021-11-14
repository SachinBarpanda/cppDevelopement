#include<bits/stdc++.h>
using namespace std;

int ways(int arr[], int size , int weight, int pair){
    if(pair > size){
        return -1;
    }

    

    ways(arr,size, weight, pair+1);
}
int main(){

}