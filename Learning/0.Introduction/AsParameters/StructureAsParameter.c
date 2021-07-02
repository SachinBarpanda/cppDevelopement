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
void increase(struct Rectangle r){
    r.length++;//this won't affect the original parameters
}
int main(){
    struct Rectangle r = {10,5};
    increase(r);
    printf("%d",area(r));
}