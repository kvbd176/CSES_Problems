#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,i,j;
cin>>n;
vector<long int> v(n);
for(i=0;i<n;i++) v[i]=i+1;
while(v.size()>1){
vector<long int> t1;
for(i=0;i<v.size();i++){
if(i%2==0) t1.push_back(v[i]);
else cout<<v[i]<<" ";
}
if(v.size()%2==0) v=t1;
else{
j=t1.back();
t1.pop_back();
v.clear();
v.push_back(j);
for(auto it: t1) v.push_back(it);
}
}
cout<<v[0];
}
