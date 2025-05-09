#include <iostream>
#include <vector>
using namespace std;
 
struct segtree{
int size;
vector<long long> tree, lazy;
void init(int n){
size=1;
while(size<n) size*=2;
tree.assign(2*size,0);
lazy.assign(2*size,0);
}
 
void build(vector<long long> &a,int x,int lx,int rx){
if(rx-lx==1){
if(lx<(int)a.size()){
tree[x]=a[lx];
}
return;
}
int m=(lx+rx)/2;
build(a,2*x,lx,m);
build(a,2*x+1,m,rx);
}
 
void build(vector<long long> &a){
build(a,1,0,size);
}
 
void propagate(int x,int lx,int rx){
if(lazy[x]== 0 || rx-lx==1) return;
tree[2*x]+=lazy[x];
lazy[2*x]+=lazy[x];
tree[2*x+1]+=lazy[x];
lazy[2*x+1]+=lazy[x];
lazy[x]=0;
}
 
void range_add(int l,int r,long long v,int x,int lx,int rx){
if(rx<=l || lx>=r) return;
if(lx>=l && rx<=r){
tree[x]+=v;
lazy[x]+=v;
return;
}
propagate(x,lx,rx);
int m=(lx+rx)/2;
range_add(l,r,v,2*x,lx,m);
range_add(l,r,v,2*x+1,m,rx);
}
 
void range_add(int l,int r,long long v){
range_add(l,r,v,1,0,size);
}
 
long long point_query(int i,int x,int lx,int rx){
if(rx-lx==1) return tree[x];
propagate(x,lx,rx);
int m=(lx+rx)/2;
if(i<m) return point_query(i,2*x,lx,m);
else return point_query(i,2*x+1,m,rx);
}
 
long long point_query(int i){
return point_query(i,1,0,size);
}
};
 
int main(){
int n,q,i;
cin>>n>>q;
vector<long long> x(n);
for(i=0;i<n;i++) cin>>x[i];
segtree st;
st.init(n);
st.build(x);
for(i=0;i<q;i++){
int m;
cin>>m;
if(m==1){
int a,b;
long long u;
cin>>a>>b>>u;
a--,b--;
st.range_add(a,b+1,u);
} 
else if(m==2){
int k;
cin>>k;
k--;
cout<<st.point_query(k)<<endl;
}
}
}       
