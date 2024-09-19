#include<bits/stdc++.h>
using namespace std;

void insertion(vector<int>&v){
    int n=v.size();
    for(int i=1;i<n;i++){
        int j=i-1;
        while(j>=0 && v[j] > v[j+1]){
            swap(v[j],v[j+1]);
            j--;
        }
    }
}
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    insertion(v);
   for(auto i:v){
    cout<<i<<" ";
   }
}
int main(){
    solve();
    return 0;
}