#include<bits/stdc++.h>
using namespace std;
void towerofHanoi(int n , char source, char dest, char helper){
    if(n==0){
        return;
    }
    towerofHanoi(n-1, source, helper,dest);
    cout << "GOing From " << source <<" ->"<< dest<<endl;
    towerofHanoi(n-1,helper,dest,source);
}


int main(){
    int n = 2; 
    towerofHanoi(n,'A','C','B');

}