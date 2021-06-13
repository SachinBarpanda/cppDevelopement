#include <stdio.h>
struct Rectangle{
    int length;
    int breadth;
};
int main(){
    // how to call for the struct
    struct Rectangle r;
    
    //struct + initialisation
    r.breadth = 20;
    r.length = 10;

    printf("Area is %d", r.length*r.breadth);

}