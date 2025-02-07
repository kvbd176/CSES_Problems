#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i;
cin>>n;
vector<long int> v(n);
for(i=0;i<n;i++) cin>>v[i];
sort(v.begin(),v.end());
long int sum=1;
for(i=0;i<n;i++){
if(v[i]>sum) break;
sum+=v[i];
}
cout<<sum<<endl;
}
