#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
cin>>n;
int m=n+1,res=-1,i;
for(i=0;i<=n/2;i++) {
int count=0;
int a=i,b=n-i;
int flag=1;
while(a||b){
if(a<b) swap(a,b);
if(a==b){
flag=0;
break;
}
count+=a/(b+1);
a%=(b+1);
}
if(flag && count<m){
m=count;
res=i;
}
}
string s;
int a=res,b=n-a,z=0;
while(a||b){
if(a<b){
swap(a,b);
z^=1;
}
int temp=a/(b+1);
for(i=0;i<temp;i++) s+='0'+z;
a%=(b+1);
}
cout<<s<<endl;
}
