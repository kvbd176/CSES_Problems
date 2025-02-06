#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i;
cin>>n;
vector<pair<int,int>> v(n);
for(i=0;i<n;i++){ cin>>v[i].first>>v[i].second;}
auto comp=[](pair<int,int> a,pair<int,int> b){
return a.second<b.second;
};
int count=0,end=-1;
sort(v.begin(),v.end(),comp);
for(i=0;i<n;i++){
if(v[i].first>=end){
end=v[i].second;
count++;
}
}
cout<<count<<endl;
}
