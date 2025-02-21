#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<pair<long int,long int>,null_type, less<pair<long int,long int>>,rb_tree_tag,tree_order_statistics_node_update>
 
int main() {
long int n,k,i,j;
cin>>n>>k;
vector<int> v(n);
for(i=0;i<n;i++) cin>>v[i];
ordered_set o;
for(i=0;i<k;i++) o.insert({v[i],i});
j=k-1;i=0;
while(j<n){
cout<<o.find_by_order((k-1)/2)->first<<" ";
o.erase({v[i],i});
o.insert({v[j+1],j+1});
i++;j++;
}
}
