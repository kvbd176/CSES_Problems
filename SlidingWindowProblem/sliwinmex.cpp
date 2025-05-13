#include <bits/stdc++.h>
using namespace std;
int main(){
int n,k,i;
cin>>n>>k;
vector<int> a(n);
for(int &x:a) cin>>x;
unordered_map<int, int> f;
set<int> m;
for(i=0;i<=n;i++) m.insert(i);
for(i=0;i<k;i++){
f[a[i]]++;
if(m.count(a[i])) m.erase(a[i]);
}
cout<<*m.begin()<<" ";
for(i=k;i<n;i++){
int out=a[i-k];
int in=a[i];
f[out]--;
if(f[out]==0) m.insert(out);
f[in]++;
if(m.count(in)) m.erase(in);
cout<<*m.begin()<<" ";
}
cout<<endl;
}
 
