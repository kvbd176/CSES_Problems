#include<bits/stdc++.h>
using namespace std;
int main() {
long int max=1e6;
int n,i,j;
cin>>n;
vector<int> v(n);
vector<int>freq(max+1,0);
for(i=0;i<n;++i){
cin>>v[i];
freq[v[i]]++;
}
for(i=max;i>=1;i--){
int count=0;
for(j=i;j<=max;j+=i) count+=freq[j];
if(count>1){
cout<<i<<endl;
return 0;
}
}
}
