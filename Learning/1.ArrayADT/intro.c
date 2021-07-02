#include<stdio.h>
struct ArrayAdt{
    int *A;
    int size;
    int length;
};
void Display(struct ArrayAdt arr){
    int i;
    printf("\n Elements are : \n");
    for(i= 0 ; i>arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}

int main(){
    struct ArrayAdt arr;    
    printf("Enter the size of Array: ");
    scanf("%d",&arr.size);
    arr.A = (int *)malloc (arr.size*sizeof(int));

    printf("Enter the length of the array: ");
    scanf("%d",&arr.length);
    printf("Enter all the elements : ");
    for(int i=0;i<arr.length;i++){
        printf("%d number : ",i);
        scanf("%d",&arr.A[i]);
    }

    // Display(arr);
    printf("\n Elements are : \n");
    for(int i= 0 ; i<arr.length;i++){
        printf("%d ",arr.A[i]);
    }
}