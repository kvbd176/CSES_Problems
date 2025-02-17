#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,i;
cin>>n;
vector<pair<pair<long int,long int>,long int>> v(n);
vector<long int> res(n,0);
for(i=0;i<n;i++){
cin>>v[i].first.first>>v[i].first.second;
v[i].second=i;
}
auto comp=[](pair<pair<long int,long int>,long int> a, pair<pair
                   <long int,long int>,long int> b) {
if(a.first.first!=b.first.first) return a.first.first < b.first.first;
else return a.first.second > b.first.second;
};
sort(v.begin(),v.end(),comp);
long int temp=INT_MAX;
for(i=n-1;i>=0;i--){
if(temp<=v[i].first.second) res[v[i].second]=1;
temp=min(temp,v[i].first.second);
}
for(i=0;i<n;i++) cout<<res[i]<<" ";
cout<<endl;
fill(res.begin(),res.end(),0);
temp=INT_MIN;
for(i=0;i<n;i++){
if(temp>=v[i].first.second) res[v[i].second]=1; 
temp=max(v[i].first.second,temp);
}
for(i=0;i<n;i++) cout<<res[i]<<" ";
cout<<endl;
}
