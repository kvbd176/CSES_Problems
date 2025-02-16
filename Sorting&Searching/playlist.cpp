#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,i;
cin>>n;
vector<long int> s(n);
set<long int> h;
for(i=0;i<n;i++) cin>>s[i];
long int res=0,j=0; i=0;
while(i<n && j<n){
while(j<n && h.find(s[j])==h.end()){
h.insert(s[j]);
res=max(res,j-i+1);
j++;
}
while(j<n && h.find(s[j])!=h.end()){
h.erase(s[i]);
i++;
}
}
cout<<res<<endl;
}
