//Pass by value
#include<stdio.h>
struct Rectangle{
    int length;
    int breadth;
};
int area(struct Rectangle r){
    r.length++;
    return r.length*r.breadth;
}

void increase(struct Rectangle* r){//dereferencing
    (*r).length++;//this will affect the original parameters
    //OR you can write like this
    r->length++;
}
int main(){
    struct Rectangle r = {10,5};
    increase(&r);//passing the address
    printf("%d",area(r));
}