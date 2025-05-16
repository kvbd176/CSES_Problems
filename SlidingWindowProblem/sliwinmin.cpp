#include <bits/stdc++.h>
using namespace std;
 
int main(){
int n,k,i;
cin>>n>>k;
long long x,a,b,c;
cin>>x>>a>>b>>c;
deque<pair<long long, int>> dq;
long long res=0;
for(i=0;i<n;i++){
if(i!=0) x=(a*x+b)%c;
while(!dq.empty() && dq.front().second<=i-k)
dq.pop_front();
while (!dq.empty() && dq.back().first>=x)
dq.pop_back();
dq.emplace_back(x,i);
if(i>=k-1) res^=dq.front().first;
}
cout<<res<<endl;
}
