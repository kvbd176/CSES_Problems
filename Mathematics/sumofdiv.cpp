#include <bits/stdc++.h>
using namespace std; 
const int MOD=1e9+7;
long long add(long long a,long long b){
    a=a+b;
    if(a>=MOD) a-=MOD;
    return a;
}
long long mul(long long a,long long b){
    return (a%MOD)*(b%MOD)%MOD;
}
long long sumrange(long long x,long long y){
    long long count=y-x+1;
    long long temp=add(x,y);
    long long res=mul(temp,count);
    return mul(res,500000004);
}
int main(){
    long long n;
    cin>>n;
    long long ans=0;
    long long q=1;
    while(q<=n){
        long long div=n/q;
        long long last=n/div;
        long long sumd=sumrange(q,last);
        ans=add(ans,mul(sumd,div));
        q=last+1;
    }
    cout<<ans<<endl;
    return 0;
}
