#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n, count= 0, sum=0, num; 
    cin >> n;
    while(n>0){
        num = n % 10;
        sum +=num*pow(2,count);
        count++;
        n /= 10;
    }
    cout<<sum;
}