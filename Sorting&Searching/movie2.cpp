#include<bits/stdc++.h>
using namespace std;
 
bool cmp(pair<int,int>&a ,pair<int,int>&b){
  return a.second<b.second;
}
 
int main(){
long long n,k,i;
cin>>n>>k;
vector<pair<int,int>>m(n);
for(i=0;i<n;i++)cin>>m[i].first>>m[i].second;
sort(m.begin(),m.end(),cmp);
set<pair<int,int>>p;
int count=0;
for(i=0;i<n;i++){
if(p.size()==0) p.insert({m[i].second*-1,i});
else{
auto it=p.lower_bound({m[i].first*-1,-1});
if(it!=p.end()){
p.erase(it);
p.insert({m[i].second*-1,i});
}
else if(it==p.end() && p.size()<k){
p.insert({m[i].second*-1,i});
}
else count++;
}
}
cout<<n-count<<endl;
}
