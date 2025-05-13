#include <bits/stdc++.h>
using namespace std;
 
long long a[1000005],seg[4*1000005],lazy[4*1000005];
 
void build(int ind,int low,int high){
if(low==high){
seg[ind]=a[low];
return;
}
int mid=(low+high)/2;
build(2*ind+1,low,mid);
build(2*ind+2,mid+1,high);
seg[ind]=0;
}
 
void propagate(int ind,int low,int high){
if(lazy[ind]!=0){
seg[ind]+=lazy[ind];
if(low!=high){ 
lazy[2*ind+1]+=lazy[ind];
lazy[2*ind+2]+=lazy[ind];
}
lazy[ind]=0;
}
}
 
void range_add(int ind,int low,int high,int l,int r,long long val){
propagate(ind,low,high);
if(high<l || low>r) return; 
if(low>=l && high<=r){ 
lazy[ind]+=val;
propagate(ind,low,high);
return;
}
int mid=(low+high)/2;
range_add(2*ind+1,low,mid,l,r,val);
range_add(2*ind+2,mid+1,high,l,r,val);
}
 
long long point_query(int ind,int low,int high,int i){
propagate(ind,low,high);
if(low==high) return seg[ind];
int mid=(low+high)/2;
if(i<=mid) return point_query(2*ind+1,low,mid,i);
else return point_query(2*ind+2,mid+1,high,i);
}
 
int main(){
int n,q,i;
cin>>n>>q;
for(i=0;i<n;i++) cin>>a[i];
build(0,0,n-1);
while(q--){
int m;
cin>>m;
if(m==1){
int l,r;
long long val;
cin>>l>>r>>val;
l--,r--;
range_add(0,0,n-1,l,r,val);
} 
else if(m==2){
int i;
cin>>i;
i--;
cout<<point_query(0,0,n-1,i)<<endl;
}
}
}
