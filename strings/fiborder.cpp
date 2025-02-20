#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.length(),i,j;
vector<int> v(n,0);
for(i=1;i<n;i++){
j=v[i-1];
while(j>0 && s[i]!=s[j]) j=v[j-1];
if(s[i]==s[j]) j++;
v[i]=j;
}
vector<int> res;
int temp=v[n-1];
while(temp){
res.push_back(temp);
temp=v[temp-1];
}
for(i=res.size()-1;i>=0;i--){
cout<<res[i]<<" ";
}
}
