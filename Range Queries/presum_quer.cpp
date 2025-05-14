#include<bits/stdc++.h>
using namespace std;
 
long long a[1000005];
struct node{
    long long sum,premax;
};
node seg[4*1000005];
 
node combine(node left,node right){
    node res;
    res.sum=left.sum+right.sum;
    res.premax=max(left.premax,left.sum+right.premax);
    return res;
}
 
void build(int ind,int l,int h){
if(l==h){
seg[ind].sum=a[l];
seg[ind].premax=max(0LL,a[l]);
return;
}
int mid=l+(h-l)/2;
build(2*ind+1,l,mid);
build(2*ind+2,mid+1,h);
seg[ind]=combine(seg[2*ind+1],seg[2*ind+2]);
}
 
void update(int ind,int l,int h,int i,long long val){
if(l==h){
a[i]=val;
seg[ind].sum=val;
seg[ind].premax=max(0LL,val);
return;
}
int mid=(l+h)/2;
if(i<=mid) update(2*ind+1,l,mid,i,val);
else update(2*ind+2,mid+1,h,i,val);
seg[ind]=combine(seg[2*ind+1],seg[2*ind+2]);
}
 
node query(int ind,int low,int high,int l,int h){
if(low>h || high<l) return {0,0}; 
if(low>=l && high<=h) return seg[ind];
int mid=(low+high)/2;
node left=query(2*ind+1,low,mid,l,h);
node right=query(2*ind+2,mid+1,high,l,h);
return combine(left,right);
}
 
int main(){
int n,q,i;
cin>>n>>q;    
for(i=0;i<n;i++) cin>>a[i];
build(0,0,n-1);    
while(q--){
long long t;
cin>>t;
if(t==1){
int k;
long long u;
cin>>k>>u;
update(0,0,n-1,k-1,u);
} 
else if(t==2){
int l,r;
cin>>l>>r;
node res=query(0,0,n-1,l-1,r-1);
cout<<res.premax<<endl;
}
}
}
