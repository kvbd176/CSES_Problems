#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,k,i,j;
cin>>n>>m>>k;
vector<int>a(n);
vector<int>b(m);
for(i=0;i<n;i++) cin>>a[i];
for(i=0;i<m;i++) cin>>b[i];
int count=0;
sort(a.begin(),a.end());
sort(b.begin(),b.end());
i=0;j=0;
while(i<n && j<m){
if(a[i]-b[j]<=k && b[j]-a[i]<=k){
count++;
i++;
j++;
}
else if(a[i]<b[j]-k) i++;
else j++;
}
cout<<count<<endl;
}
