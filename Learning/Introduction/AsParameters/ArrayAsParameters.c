//Here we will simply pass the array to the stack
#include <stdio.h>
void func(int A[], int size){//array is actually passed by a address
    for(int i ;i<size;i++){
        printf("%d ",A[i]);
    }
}
int main(){
    int a[] = {2,3,5,6,7};
    func(a,5);
}