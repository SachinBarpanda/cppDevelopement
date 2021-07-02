#include<iostream>
using namespace std;
int countNElements(int start , int m, int size, int n){
    if(m == size){
        return 1;
    }
    if(start> n){
        return 0;
    }
//include the starting element 
    int include = countNElements(start,m,size+1,n);
//exclude the starting element
    int exclude = countNElements(start+1, m, size,n);

    return (include+exclude);
}

int main(){
    int n = 0;
    int m = 0;
    cin>>n>>m;
    cout<<countNElements(1,m,0,n);
}