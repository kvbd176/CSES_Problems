#include <bits/stdc++.h>
using namespace std;
int main() {
long long n,k;
cin>>n>>k;
vector<long long> v(n);
long long i=0,j=n-1,x;
for(x=1;x<=n;x++){
if(k>=(j-i)){
v[j]=x;
k-=(j-i);
j--;
} 
else{
v[i]=x;
i++;
}
}
for(i=0;i<n;i++) cout<<v[i]<<" ";
cout<<endl;
}
