#include <bits/stdc++.h>
using namespace std;
 
const int MAXN=1000005;
int a[1000005],p[1000005],alive[1000005]; 
int seg[4*1000005]; 
 
int n;
void build(int ind,int low,int high){
if(low==high){
seg[ind]=alive[low];
return;
}
int mid=(low+high)/2;
build(2*ind+1,low,mid);
build(2*ind+2,mid+1,high);
seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}
 
void update(int ind,int low,int high,int i){
if(low==high){
seg[ind]=0;
return;
}
int mid=(low+high)/2;
if(i<=mid) update(2*ind+1,low,mid,i);
else update(2*ind+2,mid+1,high,i);
seg[ind]=seg[2*ind+1]+seg[2*ind+2];
}
 
int query(int ind,int low,int high,int k){
if(seg[ind]<k) return -1; 
if(low==high) return low;
int mid=(low+high)/2;
if(seg[2*ind+1]>=k)
return query(2*ind+1,low,mid,k);
else
return query(2*ind+2,mid+1,high,k-seg[2*ind+1]);
}
 
int main(){
int i;
cin>>n;
for(i=0;i<n;i++) cin>>a[i];
for(i=0;i<n;i++) cin>>p[i];
for(i=0;i<n;i++) alive[i]=1;
build(0,0,n-1);
for(i=0;i<n;i++){
int k=p[i];
int idx=query(0,0,n-1,k);
cout<<a[idx]<<" ";
update(0,0,n-1,idx);
}
cout<<endl;
}
