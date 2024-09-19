#include<bits/stdc++.h>
using namespace std;

void bubble(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(v[j] > v[j+1]){
                swap(v[j],v[j+1]);
            }
        }
    }
}
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bubble(v);
   for(auto i:v){
    cout<<i<<" ";
   }
}
int main(){
    solve();
    return 0;
}