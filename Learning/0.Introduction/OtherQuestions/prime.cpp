#include<iostream>
#include <chrono>
#include <cmath>

using namespace std;
using namespace std::chrono;
int main(){
    

    auto start = high_resolution_clock::now();
    int countNumbers = 1;
    cout<<2<<" ";
    for(int i = 3;i <10000;i=i+2){
        int count = 0; 
        for(int j = 3 ; j <= sqrt(i) ; j=j+2){
            if(i%j == 0){
                count++;
            }
        }
        if(count==0){
            cout<< i << " ";
            countNumbers++;
        }
    }


    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop - start);
    cout<<"\n";
    cout<<"Total number of prime numbers found under 1million : "<< countNumbers << "\n";
    cout << "Time taken to run the execution is : "<< duration.count() << endl;
}