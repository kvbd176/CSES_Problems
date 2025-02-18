#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll t,i;
cin>>t;
vector<ll> pow10(19,1);
for(i=1;i<19;i++) pow10[i]=pow10[i-1]*10;
while(t>0){
ll n;
cin>>n;
ll n2=0,n1=0,count=0;
for(i=1;i<=18;i++){
n2+=(pow10[i]-pow10[i-1])*i;
if(n<=n2){
count=i;
break;
}
n1+=(pow10[i]-pow10[i-1])*i;
}
ll l=pow10[count-1];
ll h=pow10[count]-1;
ll res=0,pos=0;
while(l<=h){
ll mid=(h+l)/2;
ll temp=n1+1+(mid-pow10[count-1])*count;
if(temp<=n){
if(mid>res){
res=mid;
pos=temp;
}
l=mid+1;
}
else h=mid-1;
}
string num=to_string(res);
cout<<num[n-pos]<<endl;
t--;
}
}
