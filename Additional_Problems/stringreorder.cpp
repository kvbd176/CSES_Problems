#include <bits/stdc++.h>
using namespace std;
int main() {
string s,ans; 
cin>>s;
int n=s.size();
sort(s.begin(),s.end());
set<char> str;
vector<int> fq(26, 0);
for(auto it:s){
fq[it-'A']++;
str.insert(it);
}
auto it=max_element(fq.begin(),fq.end());
if(2*(*it)-n>1){
cout<<-1<<endl;
return 0;
}
char prev='Z'+1;
while(2*(*it)-n<1){
char x=*str.begin();
str.erase(x);
ans+=x; 
fq[x-'A']--;
if(fq[prev-'A']) str.insert(prev);
prev=x;
it=max_element(fq.begin(),fq.end());
n--;
}
if(*it){
string temp;int i; 
char x=it-fq.begin()+'A';
for(i=0;i<26;i++){
if(x-'A'!=i) temp+=string(fq[i],i+'A');
}
ans+=x;
for(auto it:temp){
ans+=it;
ans+=x;
}
}
cout<<ans<<endl;
}
