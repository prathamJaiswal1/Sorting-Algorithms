#include<bits/stdc++.h>
using namespace std;

void selection(vector<int>&v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        int mini=i;
        for(int j=i;j<n;j++){
             if(v[j] < v[mini]){
                mini=j;
             }
        }
        swap(v[mini],v[i]);
    }
}
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
   selection(v);
   for(auto i:v){
    cout<<i<<" ";
   }
}
int main(){
    solve();
    return 0;
}