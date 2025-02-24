#include<bits/stdc++.h>
using namespace std; 
int main(){
int n;
long int x,i,j,l,r;
cin>>n>>x;
vector<pair<long int,int>> v(n);
for(i=0;i<n;i++){
cin>>v[i].first;
v[i].second=i+1;
}
sort(v.begin(),v.end());
for(i=0;i<n-3;i++){
for(j=i+1;j<n-2;j++){
long long temp=x-v[i].first-v[j].first;
l=j+1,r=n-1;
while(l<r){
long long sum=v[l].first+v[r].first;
if(sum==temp){
cout<<v[i].second<<" "<<v[j].second<<" "<<v[l].second<<" "<<v[r].second<<endl;
return 0;
}
else if(sum<temp) l++;
else r--;
}
}
}
cout<<"IMPOSSIBLE"<<endl;
}
