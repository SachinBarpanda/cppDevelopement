#include <iostream>
using namespace std;

int main(){
    int numNeighbors = 2;
    if(numNeighbors >= 3){
        ++numNeighbors;
        cout << "You are dead!" << endl;
    }
    else{
        --numNeighbors;
        cout<<"Let you live";
    }
}