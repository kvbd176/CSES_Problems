#include<bits/stdc++.h>
using namespace std;
int main(){
long int t;
cin>>t;
while(t>0){
long int a,b;
cin>>a>>b;
bool flag=true;
if((a+b)%3!=0||min(a,b)*2<max(a,b)) flag=false;
if(flag) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
t--;
}
}
