#include <bits/stdc++.h>
using namespace std;
 
int main(){
int n,k,i;
cin>>n>>k;
long long x,a,b,c;
cin>>x>>a>>b>>c;
long long res=0;
vector<long long> window;
long long window_sum=0;
for(i=0;i<n;i++){
if (i==0) window.push_back(x);
else{
x=(a*x+b)%c;
window.push_back(x);
}
window_sum+=window.back();
if(i>=k) window_sum-=window[i-k];
if(i>=k-1) res^=window_sum;
}
cout<<res<<endl;
}
