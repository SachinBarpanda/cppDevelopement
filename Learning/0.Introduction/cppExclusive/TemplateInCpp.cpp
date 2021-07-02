#include <iostream>
using namespace std;
template <class T>//generic variable is T
class Arithemetic{
    private : 
        T a;
        T b;
    public : 
        Arithemetic(T a , T b);
        T add();
        T sub();
};//template ends here
template <class T>
Arithemetic <T> :: Arithemetic(T a , T b){
    this->a = a ;//pointer to the this
    this->b = b;
}
template <class T>
T Arithemetic <T> :: add(){//declare that the return type value is also T
    return a+b;
}
template <class T>
T Arithemetic <T> :: sub(){
    return a-b;
}

int main(){
    Arithemetic <int> ar(10,5);//we have to declare the type of generic class inside <>
    cout<<ar.add()<<"\n";
    Arithemetic <float> ar1(2.3,4.1);//all the t's will be replaced by the data type inside<>
    cout<<ar1.sub();
}