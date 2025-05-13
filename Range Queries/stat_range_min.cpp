#include<bits/stdc++.h>
using namespace std;
int a[1000005],seg[4*1000005];
 
void build(int ind,int low,int high){
if(low==high){
seg[ind]=a[low];
return;
}
int mid=low+(high-low)/2;
build(2*ind+1,low,mid);
build(2*ind+2,mid+1,high);
seg[ind]=min(seg[2*ind+1],seg[2*ind+2]);
}
 
int query(int ind,int low,int high,int l,int h){
if(high<=h && low>=l) return seg[ind];
if(high<l || low>h) return INT_MAX;
int mid=low+(high-low)/2;
int left=query(2*ind+1,low,mid,l,h);
int right=query(2*ind+2,mid+1,high,l,h);
return min(left,right);
}
 
int main(){
int n,i,q;
cin>>n>>q;
for(i=0;i<n;i++) cin>>a[i];
build(0,0,n-1);
while(q--){
int l,r;
cin>>l>>r;
int res=query(0,0,n-1,l-1,r-1);
cout<<res<<endl;
}
}
