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
 
void build(vector<int> &a){
int i;
for(i=0;i<(int)a.size();i++) tree[size+i]=a[i];
for(i=size-1;i>=1;i--) tree[i]=tree[2*i]+tree[2*i+1];
}
 
void update(int i,int value){
i+=size;
tree[i]=value;
while(i>1){
i/=2;
tree[i]=tree[2*i]+tree[2*i+1];
}
}
 
int query(int k){
if(tree[1]<k) return -1;  
int i=1;
while(i<size){
if(tree[2*i]>=k) i=2*i;
else{
k-=tree[2*i];
i=2*i+1;
}
}
return i-size;
}
};
 
int main(){
int n,i;
cin>>n;
vector<int> x(n),p(n);
for(i=0;i<n;i++) cin>>x[i];
for(i=0;i<n;i++) cin>>p[i];
vector<int> alive(n,1);
segtree st;
st.init(n);
st.build(alive);
for(i=0;i<n;i++){
int k=p[i];
int idx=st.query(k);
cout<<x[idx]<<" ";
st.update(idx,0); 
}
cout<<endl;
}
