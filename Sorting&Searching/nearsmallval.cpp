#include <bits/stdc++.h>
using namespace std;
 
int main(){
long int n,i;
cin>>n;
vector<long int> v(n);
for (i=0;i<n;i++) cin >> v[i];
vector<long int> res(n);
stack<long int> s;
for(i=0;i<n;i++){
while(!s.empty() && v[s.top()]>=v[i]) s.pop();
if(s.empty()) res[i]=0;
else res[i]=s.top()+1;
s.push(i);
}
for(i=0;i<n;i++) cout<<res[i]<<" ";
cout<<endl;
}
