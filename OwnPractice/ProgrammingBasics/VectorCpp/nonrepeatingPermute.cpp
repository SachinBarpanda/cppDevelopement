#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void permute (vector <int> &a ,int id ){
    if(id == a.size()){
        ans.push_back(a);
        return;
    }
    for(int i = id ; i < a.size();i++){
        if(i!=id && a[i]==a[id]){
            continue;
        }
        swap(a[i],a[id]);
        permute(a,id+1);
        swap(a[i],a[id]);
    }

}
int main(){
    int n ; 
    cin >> n ;
    vector<int> a(n);
    for(auto &i:a){
        cin >> i;
    }
    permute(a,0);
    for(auto v: ans){
        for(auto i : v){
            cout << i << " ";
        }
        cout<<endl;
    }   
}