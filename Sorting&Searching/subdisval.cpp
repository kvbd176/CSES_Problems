#include <bits/stdc++.h>
using namespace std;
 
int main() {
int n,k,i;
cin>>n>>k;
vector<int> v(n);
for(i=0;i<n;i++) cin>>v[i];
map<int, int> freq;
long long res=0;
int l=0,dis=0;
for(i=0;i<n;i++){
freq[v[i]]++;
if(freq[v[i]]==1) dis++; 
while(dis>k){
freq[v[l]]--;
if(freq[v[l]]==0) dis--;
l++;
}
res+=(i-l+1);
}
cout<<res<<endl;
}
