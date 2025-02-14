#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,i;
cin>>n;
vector<pair<long int,long int>> v(n);
for(i=0;i<n;i++){cin>>v[i].first;cin>>v[i].second;}
sort(v.begin(),v.end());
long int pres=0,max=0;
for(i=0;i<n;i++){
pres+=v[i].first;
max+=(v[i].second-pres);
}
cout<<max<<endl;
}
