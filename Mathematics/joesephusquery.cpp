#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
int t;
cin>>t;
while(t>0){
ll n,k;
cin>>n>>k;
ll dif=1,i=2,t1=n;
bool flag=false;
while(t1){
ll del=t1/2+(flag && t1%2);
if(k<=del){
ll res=i+2*(k-1)*dif;
res=(res%n+n)%n;
if(res==0) cout<<n<<endl;
else cout<<res<<endl;
break;
}
if(t1%2){
if(flag) i=(i+3*dif)%n;
else i=(i-dif)%n;
if(i<=0) i+=n;
} 
else{
i=(i+dif)%n;
if(i<=0) i+=n;
}
dif*=2;
if(t1%2) flag=!flag;
k-=del;
t1-=del;
}
t--;
}
}
