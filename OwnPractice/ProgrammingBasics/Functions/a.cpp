#include<iostream>
#include<math.h>
using namespace std;
int circumference(int radius){
    return 2*M_PI*radius;
}
int area(int radius){
    return M_PI*pow(radius,2);
}


int main(){
    int radius;
    cin>>radius;
    cout<<"Circumference of circle: "<<circumference(radius);
    cout<<"Area of circle : "<<area(radius);
}