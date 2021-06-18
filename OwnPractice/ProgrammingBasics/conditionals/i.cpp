#include<iostream>

using namespace std;
int main(){
     char sex ; int age;
     cin>>sex;
     cin>>age;
     string workPlace ;
     sex = (toupper(sex));

     if(sex == 'F'){
         workPlace = "urban";
     }else if(sex == 'M'){
         if(age>20&& age<=40){
            workPlace = "anywhere";
         }else if(age>40&& age<60){
             workPlace = "urban";
         }
     }else{
         workPlace="Error";
     }
     cout<<sex <<" so they can work in "<<workPlace;
}