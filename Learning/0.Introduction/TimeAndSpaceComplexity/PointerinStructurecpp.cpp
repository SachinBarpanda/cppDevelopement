#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

//declaring a user defined operator
ostream& operator << (ostream& os , const Rectangle& m){
    os <<m.length << " " << m.breadth <<endl;
    return os;
}


int main(){
    struct Rectangle r = {5,10}; 
    //declaring it as a pointer 
    struct Rectangle *p = &r;
    //declaring a rectangle
    cout<<"r.length is "<<r.length<<"\n";

    //declaring a pointer for structure
    cout<<"(*p).length is "<<(*p).length<<"\n";

    //simplifying it we can write
    cout<<"p->length is "<<p->length<<"\n";
    
    //declaring in the heap
    struct Rectangle *pheap;
    pheap = new struct Rectangle;
    //deaclaring 
    pheap->length = 40;

    cout << *pheap<<"\n";

}