#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void permute (vector <int> &a ,int id ){
    if(id == a.size()){
        ans.push_back(a);
        return;
    }
    int prev = 0;
    for(int i = id ; i < a.size();i++){
        if(i!=id && a[i]==a[id])
            continue;
        if(prev == a[i]) continue;
        swap(a[i],a[id]);
        prev = a[i];
        permute(a,id+1);
        // swap(a[i],a[id]);
    }

}
int main(){
    int n ; 
    cin >> n ;
    vector<int> a(n);
    for(auto &i:a){
        cin >> i;
    }
    sort(a.begin(),a.end());
    permute(a,0);
    for(auto v: ans){
        for(auto i : v){
            cout << i << " ";
        }
        cout<<endl;
    }   
}