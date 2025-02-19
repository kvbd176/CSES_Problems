#include<bits/stdc++.h>
using namespace std;
int main(){
long int n,i,j;
cin>>n;
vector<long int> v(n);
for(i=0;i<n;i++) cin>>v[i];
vector<long int> tow;
tow.push_back(v[0]);
for(i=1;i<n;i++){
auto it=upper_bound(tow.begin(),tow.end(),v[i]);
if(it!=tow.end()) *it=v[i]; 
else tow.push_back(v[i]);
}
cout<<tow.size()<<endl;
}
