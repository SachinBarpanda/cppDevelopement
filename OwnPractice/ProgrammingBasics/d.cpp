#include <iostream>
using namespace std;

int main(){
    double taxRate = 15.6;
    char taxCode = 'T';
    double originalPrice = 100;
    if(taxCode == 'T'){
        originalPrice += originalPrice*(taxRate/100);
    }
    cout<<originalPrice;
}