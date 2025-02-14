#include <bits/stdc++.h>
using namespace std;
 
void findmin(vector<long int>& v,int n,long int sum1,long int sum2,long int &mindif,int i){
if(i==n){
mindif=min(mindif,abs(sum1-sum2));
return;
}
findmin(v,n,sum1+v[i],sum2,mindif,i+1);
findmin(v,n,sum1,sum2+v[i],mindif,i+1);
}
int main() {
long int n,i;
cin>>n;
vector<long int> v(n);
for(i=0;i<n;i++) cin>>v[i];
long int mindif=LLONG_MAX;
findmin(v,n,0,0,mindif,0);
cout<<mindif<<endl;
}
