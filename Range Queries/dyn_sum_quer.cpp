#include<bits/stdc++.h>
using namespace std;
long long a[1000005],seg[4*1000005];
 
void build(int ind,int low,int high){
if(low==high){
seg[ind]=a[low];
return;
}
int mid=low+(high-low)/2;
build(2*ind+1,low,mid);
build(2*ind+2,mid+1,high);
seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}
 
long long query(int ind,int low,int high,int l,int h){
if(high<=h && low>=l) return seg[ind];
if(high<l || low>h) return 0;
int mid=low+(high-low)/2;
long long left=query(2*ind+1,low,mid,l,h);
long long right=query(2*ind+2,mid+1,high,l,h);
return left+right;
}
 
void update(int ind,int low,int high,int i,long long val){
if(low==high){
seg[ind]=val;
a[i]=val;
return;
}
int mid=(low+high)/2;
if(i<=mid) update(2*ind+1,low,mid,i,val);
else update(2*ind+2,mid+1,high,i,val);
seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}
 
int main(){
int n,i,q;
cin>>n>>q;
for(i=0;i<n;i++) cin>>a[i];
build(0,0,n-1);
while(q--){
int m;
cin>>m;
if(m==1){
int k;
long long u;
cin>>k>>u;
update(0,0,n-1,k-1,u);
}
if(m==2){
int l,r;
cin>>l>>r;
long long res=query(0,0,n-1,l-1,r-1);
cout<<res<<endl;
}
}
}
