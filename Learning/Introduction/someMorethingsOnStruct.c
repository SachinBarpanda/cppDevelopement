// declaring the complex number
struct complex{
    int real;
    int img;//imaginary
};

//declaring the cards info
struct cards{
    int face;
    int shape;
    int color;
};

//declaring the info of the candidate
struct user{
    int roll;
    char name[25];
    char dept[25];
    char add[50];
};

//making the cards
#include <stdio.h>
int main(){
    struct cards deck[52] = {{0,1,2},{3,2,1}};
    printf("%d", deck[1].shape);
}