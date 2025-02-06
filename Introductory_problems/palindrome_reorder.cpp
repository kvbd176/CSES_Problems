#include<bits/stdc++.h>
using namespace std;
int main(){
int i;
string s;
cin>>s;
vector<int> count(26,0);
for(i=0;i<s.length();i++){
count[s[i]-'A']++; 
}
int odd=0;
char oddchar;
for(i=0;i<26;i++){
if(count[i]%2!=0){ odd++; oddchar='A'+i;}
}  
if(odd>1){cout<<"NO SOLUTION"; return 0;}
string str,str2;
for(i=0;i<26;i++){
while(count[i]>1) {str+=('A'+i); count[i]-=2;}
}
str2=str;
reverse(str.begin(),str.end());
string result;
result=str;
if(odd==1) result+=oddchar;
result+=str2;
cout<<result<<endl;
return 0;
}
