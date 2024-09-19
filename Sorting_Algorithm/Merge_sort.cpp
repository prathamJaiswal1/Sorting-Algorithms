#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&v,int low,int mid,int high){
    vector<int>temp;
    int left=low,right=mid+1;
    while(left<=mid && right<=high){
        if(v[left] <= v[right]){
            temp.push_back(v[left++]);
        }else{
            temp.push_back(v[right++]);
        }
    }
    while(left<=mid){
         temp.push_back(v[left++]);
    }
    while(right<=high){
        temp.push_back(v[right++]);
    }
    for(int i=low; i<=high; i++){
        v[i]=temp[i-low];
    }
    temp.clear();
}
void mergeSort(vector<int>&v,int low,int high){
      if(low >= high) return ;
      int mid=(low+high)>>1;
      mergeSort(v,low,mid);
      mergeSort(v,mid+1,high);
      merge(v,low,mid,high);
}
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    mergeSort(v,0,n-1);
   for(auto i:v){
    cout<<i<<" ";
   }
}
int main(){
    solve();
    return 0;
}