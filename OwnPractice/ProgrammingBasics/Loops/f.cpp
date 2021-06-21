#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n1,n,count;
    cin>>n;
    n1 = n;
    int first,beforeFirst, last;
    last = n%10;
    while(n>0){
        first = beforeFirst;
        n = n/10;
        beforeFirst = n;
        count++;
    }
//swap first and last
    cout<<"Before swap : " <<n1<<"\n";
    n1 = n1-last;
    n1 = n1+first;
    cout<<"Half swap : " <<n1<<"\n";

    n1 = n1-(first*(int)pow(10,count-1));
    n1 = n1+(last*(int)pow(10,count-1));

    cout<<"Full swap : " <<n1<<"\n";

}