struct test{
    int A[5];
    int n ;
};
void fun(struct test t1){//Array can be passed as value when inside a structure
    t1.A[0] = 9;
    t1.A[1] = 10;
}
int main(){
    struct test t = {{2,4,5,6,7},8};
    fun(t);
    for(int i = 0 ;i<5;i++){
        printf("%d value is : %d \n",i,t.A[i]);
    }//since it's passed by values the values are not changed in the original equation
}