#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,i;
cin>>n;
vector<long int> v(n);
map<long int,long int> m;
m[0]=1;
for(i=0;i<n;i++) cin>>v[i];
long int count=0,sum=0;
for(i=0;i<n;i++){
sum+=v[i]%n;
sum=(sum+n)%n;
count+=m[sum];
m[sum]++;
}
cout<<count<<endl;
}
