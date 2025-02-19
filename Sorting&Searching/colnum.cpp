#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,i;
cin>>n;
vector<pair<long int,long int>> v(n);
for(i=0;i<n;i++){
cin>>v[i].first;
v[i].second=i;
}
sort(v.begin(),v.end());
long int count=1;
for(i=1;i<n;i++){
if(v[i-1].second>v[i].second) count++;
}
cout<<count<<endl;
}
