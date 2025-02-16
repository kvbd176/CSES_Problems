#include<bits/stdc++.h>
using namespace std;

int ori(pair<long int,long int> x,pair<long int,long int> y,pair<long int,long int> z){
long int temp=(y.first-x.first)*(z.second-x.second)-(y.second-x.second)*(z.first-x.first);
if(temp==0) return 0;
else if(temp>0) return 1;
else return 2;
}

bool check(pair<long int,long int> x, pair<long int,long int> y,pair<long int,long int>z){
if(z.first<=max(x.first,y.first)&&z.first>=min(x.first,y.first)
&&z.second<=max(x.second,y.second)&&z.second>=min(x.second,y.second))
return true;
else return false;
}

int main(){
long int t,i;
cin>>t;
while(t>0){
vector<pair<long int,long int>>v(4);
for(i=0;i<4;i++) cin>>v[i].first>>v[i].second;
int o1=ori(v[0],v[1],v[2]);
int o2=ori(v[0],v[1],v[3]);
int o3=ori(v[2],v[3],v[0]);
int o4=ori(v[2],v[3],v[1]);
if(o1!=o2 && o3!=o4) cout<<"YES"<<endl;
else if(o1==0 && check(v[0],v[1],v[2])) cout<<"YES"<<endl;
else if(o2==0 && check(v[0],v[1],v[3])) cout<<"YES"<<endl;
else if(o3==0 && check(v[2],v[3],v[0])) cout<<"YES"<<endl;
else if(o4==0 && check(v[2],v[3],v[1])) cout<<"YES"<<endl;
else cout<<"NO"<<endl;
t--;
}
}
