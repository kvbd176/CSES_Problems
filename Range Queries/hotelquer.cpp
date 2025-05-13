#include <iostream>
#include <vector>
using namespace std;
 
struct segtree{
int size;
vector<int> tree;
void init(int n){
size=1;
while(size<n) size*=2;
tree.assign(2*size,0);
}
 
void build(vector<int>& a){
int i;
for(i=0;i<a.size();i++) tree[size+i]=a[i];
for(i=size-1;i>=1;i--) tree[i]=max(tree[2*i],tree[2*i+1]);
}
 
void update(int i,int value){
i+=size;
tree[i]=value;
while(i>1){
i/=2;
tree[i]=max(tree[2*i],tree[2*i+1]);
}
}
 
int query(int k){
if(tree[1]<k) return -1;
int i=1;
while(i<size){
if(tree[2*i]>=k) i=2*i;
else i=2*i+1;
}
return i-size;
}
};
 
int main(){
int n,m,i;
cin>>n>>m;
vector<int> h(n);
for(i=0;i<n;i++) cin>>h[i];
vector<int> g(m);
for(i=0;i<m;i++) cin>>g[i];
segtree st;
st.init(n);
st.build(h);
for(i=0;i<m;i++){
int r=g[i];
int idx=st.query(r);
if(idx==-1) cout<<0<<" ";
else{
cout<<idx+1<<" ";
h[idx]-=r;
st.update(idx,h[idx]);
}
}
cout<<endl;
return 0;
}
