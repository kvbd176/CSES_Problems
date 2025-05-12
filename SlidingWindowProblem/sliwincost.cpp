#include <bits/stdc++.h>
using namespace std;
 
void balance(multiset<long int>& l,multiset<long int>& h,long int& lsum,long int& hsum) {
while(l.size()>h.size()+1){
auto it=prev(l.end());
h.insert(*it);
hsum+=*it;
lsum-=*it;
l.erase(it);
}
while(l.size()<h.size()){
auto it=h.begin();
l.insert(*it);
lsum+=*it;
hsum-=*it;
h.erase(it);
}
}
 
long int getcost(multiset<long int>& l,multiset<long int>& h,long int lsum,long int hsum) {
long int m=*prev(l.end());
return m*l.size()-lsum+hsum-m*h.size();
}
 
int main(){
long int n,k,i,j;
cin>>n>>k;
vector<int> v(n); 
for(i=0;i<n;i++) cin>>v[i];
multiset<long int> l,h;
long int lsum=0,hsum=0;
i=0,j=0;
while(j<k){
if(l.empty() || v[j]<=*prev(l.end())){
l.insert(v[j]);
lsum+=v[j];
} 
else{
h.insert(v[j]);
hsum += v[j];
}
j++;
}
balance(l,h,lsum,hsum);
cout<<getcost(l,h,lsum,hsum)<<" ";
while(j<n){
if(l.empty() || v[j]<=*prev(l.end())) {
l.insert(v[j]);
lsum+=v[j];
} 
else{
h.insert(v[j]);
hsum+=v[j];
}
if(l.find(v[i])!=l.end()){
l.erase(l.find(v[i]));
lsum-=v[i];
} 
else{
h.erase(h.find(v[i]));
hsum-=v[i];
}
balance(l,h,lsum,hsum);
cout<<getcost(l,h,lsum,hsum)<<" ";
i++;
j++;
}
cout<<endl;
}
