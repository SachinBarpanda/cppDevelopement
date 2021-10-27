#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    cin >> n;
    cin.ignore();//also here
    char arr[n+1];
    //To get the statement even after a space is found
    cin.getline(arr,n);
    cin.ignore();//no more buffer ahead

    int i = 0;
    int wordCount = 0 , maxCount = INT_MIN; 
    int start = 0;
    while(true){
        if(arr[i] == ' ' || arr[i] == '\0'){
            // maxCount = max(wordCount, maxCount);
            if(wordCount > maxCount){
                maxCount = wordCount;
                start = i - maxCount;
            }
            wordCount = 0;
        }else{
            wordCount++;
        }
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }
    cout << maxCount << endl;
    for(int i = start ; i <= (start+maxCount) ; i++){
        cout << arr[i];
    }

    

}