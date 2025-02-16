#include<bits/stdc++.h>
using namespace std;
void pitable(string s,vector<long int>& tab){
long int n=s.length();
long int l=0,i=1;
tab[0]=0;
while(i<n){
if(s[i]==s[l]){
l++;
tab[i]=l;
i++;
}
else{
if(l!=0) l=tab[l-1];
else{tab[i]=l; i++;}
}
}
}
 
int main(){
string s1,s2;
cin>>s1>>s2;
vector<long int> tab(s2.length());
pitable(s2,tab);
long int i=0,j=0,res=0;
long int n=s1.length(),m=s2.length();
while(n-i>=m-j){
if(s1[i]==s2[j]){i++;j++;}
if(j==m){res++;j=tab[j-1];}
else if(i<n && s1[i]!=s2[j]){
if(j!=0) j=tab[j-1];
else i++;
}
}
cout<<res<<endl;
}
