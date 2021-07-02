#include<stdio.h>
#include<stdlib.h>
struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r = {5,10}; 
    //declaring it as a pointer 
    struct Rectangle *p = &r;
    //declaring a rectangle
    printf("r.length is %d\n",r.length);

    //declaring a pointer for structure
    printf("(*p).length is %d\n",(*p).length);

    //simplifying it we can write
    printf("p->length is %d\n",p->length);

    //For using this in the heap memory we can do
    struct Rectangle *pheap;
    pheap = (struct Rectangle*) malloc(sizeof(struct Rectangle));
    //declaring the pheap
    pheap->length = 10;
    pheap->breadth = 50;

    //accessing the heap memory we can get
    printf("*p is %d",*pheap);
    
}
