#include <bits/stdc++.h>
using namespace std;
long int modu(long int a,long int n){
long int mod=1e9+7;
long int result=1;
while(n>0){
if(n%2==1) result=(result*a)%mod;
a=(a*a)%mod;
n/=2;
}
return result;
}
int main(){
long int n;
cin>>n;
while(n>0){
long int a,b;
cin>>a>>b;
long int result=modu(a,b);
cout<<result<<endl;
n--;
}
}
