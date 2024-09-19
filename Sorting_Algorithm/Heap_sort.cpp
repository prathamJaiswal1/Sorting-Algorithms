#include<bits/stdc++.h>
using namespace std;

void heapify(int ind,int n,vector<int>&v){
     int par=ind,lc=2*ind+1,rc=2*ind+2;
     int mini=par;
     if(lc < n && v[lc] > v[mini]){
         mini=lc;
     }
     if(rc < n && v[rc] > v[mini]){
        mini=rc;
     }
     if(mini!=par){
         swap(v[par],v[mini]);
         heapify(mini,n,v);
     }

}
void heap(vector<int>&v){
    int n=v.size();
    // build heap
    for(int i=n/2-1;i>=0;i--){
        heapify(i,n,v);
    }
    for(int i=n-1; i>0; i--){
         swap(v[0],v[i]);
         heapify(0,i,v);
    }
}
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    heap(v);
   for(auto i:v){
    cout<<i<<" ";
   }
}
int main(){
    solve();
    return 0;
}