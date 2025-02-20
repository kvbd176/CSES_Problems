#include<bits/stdc++.h>
using namespace std;
int main(){
int n,x,i,j;
cin>>n>>x;
vector<int> v(n);
for(i=0;i<n;i++) cin>>v[i];
int count=0,sum=0;
i=0;j=0;
while(i<n){
sum+=v[i];
while(sum>=x){
if(sum==x) count++;
sum-=v[j];
j++;
}
i++;
}
cout<<count<<endl;
}
