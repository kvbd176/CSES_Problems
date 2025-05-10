#include <bits/stdc++.h>
using namespace std;

struct segtree{
    int size;
    vector<long long> tree;

    void init(int n){
        size=1;
        while(size<n) size*=2;
        tree.assign(2*size,0);
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
        tree[x]=tree[2*x]+tree[2*x+1];
    }

    void build(vector<long long> &a){
        build(a,1,0,size);
    }

    void point_update(int i,long long v,int x,int lx,int rx) {
        if(rx-lx==1){
            tree[x]=v;
            return;
        }
        int m=(lx+rx)/2;
        if(i<m) point_update(i,v,2*x,lx,m);
        else point_update(i,v,2*x+1,m,rx);
        tree[x]=tree[2*x]+tree[2*x+1];
    }

    void point_update(int i,long long v){
        point_update(i,v,1,0,size);
    }

    long long range_sum(int l,int r,int x,int lx,int rx){
        if(lx>=r || rx<=l) return 0;
        if(lx>=l && rx<=r) return tree[x];
        int m=(lx+rx)/2;
        long long s1=range_sum(l,r,2*x,lx,m);
        long long s2=range_sum(l,r,2*x+1,m,rx);
        return s1+s2;
    }

    long long range_sum(int l,int r){
        return range_sum(l,r,1,0,size);
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
            int k;
            long long u;
            cin>>k>>u;
            k--;
            st.point_update(k,u);
        } 
        else if(m==2){
            int a,b;
            cin>>a>>b;
            a--,b--;
            cout<<st.range_sum(a,b+1)<<endl;
        }
    }
}
