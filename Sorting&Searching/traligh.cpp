#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,m,i;
cin>>n>>m;
multiset<long int> len;
set<long int> s;
long int l=0,h=n;
s.insert(l);
s.insert(h);
len.insert(n);
for(i=0;i<m;i++){
long int temp;
cin>>temp;
s.insert(temp);
auto it=s.find(temp);
l=*prev(it);
h=*next(it);
len.erase(len.find(h-l));
len.insert(temp-l);
len.insert(h-temp);
cout<<(*len.rbegin())<<" ";
}	
}
