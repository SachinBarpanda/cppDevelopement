#include<stdio.h>
int main(){
    int a[5];
    print(a,5);
    int b[5] = {2,4,5,6,7};
    print(b,5);
    int c[5] = {2,5};
    print(c,5);
    int d[5] = {0};
    print(d,5);
    int e[] = {2,4,6,7,9,10};
    print(e,6);


}
void print(int a[],int n){
    for(int i = 0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}