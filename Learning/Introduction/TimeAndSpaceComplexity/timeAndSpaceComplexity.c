#include<stdio.h>
int main(){
    //declaring an array 
    int arr[5] = {5,3,6,7,1,19};
    //declaring a matrix or a 2d array
    int mat[3][3] = {{4,3},{2,3},{6,5},{8,10}};

    //parsing this takes o(n) time complexity
    for ( int i = 0; i < 6; i++)
    {
        /* code */
        printf("%d ",arr[i]);
    }   
    printf("\n");
    //parsing this takes o(n^2) time complexity
    for(int i=0; i<4;i++){
        for(int j = 0;j < 4;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

}