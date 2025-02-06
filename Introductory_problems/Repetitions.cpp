#include<bits/stdc++.h>
using namespace std;
int main(){
long int result=0,temp=0;
string s;
cin>>s;
long int i;
for(i=1;s[i]!='\0';i++){
if(s[i-1]==s[i]) temp++;
else{
if((temp+1)>result) result=temp+1;
temp=0;
}
}
if((temp+1)>result) result=temp+1;
cout<<result;
}
