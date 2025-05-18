#include <bits/stdc++.h>
using namespace std;
 
int main() {
string s;
cin>>s;
s+=s;
int n=s.size();
vector<int> f(n,-1);
int m=0,j;
for(j=1;j<n;j++){
char c=s[j];
int i=f[j-m-1];
while(i!=-1 && c!=s[m+i+1]){
if(c<s[m+i+1]) m=j-i-1;
i=f[i];
}
if(c!=s[m+i+1]){
if(c<s[m]) m=j;
f[j-m]=-1;
} 
else f[j-m]=i+1;
}
int l=n/2;
cout<<s.substr(m,l)<<endl;
}
