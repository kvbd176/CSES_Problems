#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x,i,j,temp;
cin>>n>>x;
vector<pair<int,int>> v(n);
for(i=0;i<n;i++){
cin>>temp;
v[i].first=i+1;
v[i].second=temp;
}
auto comp=[](pair<int,int> a,pair<int,int> b){
return a.second<b.second;
};
sort(v.begin(),v.end(),comp);
int flag=0;
i=0;j=n-1;
while(i<j){
if((v[i].second+v[j].second)==x){
cout<<v[i].first<<" "<<v[j].first<<endl;
flag=1;
break;
}
else if((v[i].second+v[j].second)<x) i++;
else j--;
}
if(!flag) cout<<"IMPOSSIBLE"<<endl;
}
