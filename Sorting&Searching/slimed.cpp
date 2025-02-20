#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<pair<long int,long int>,null_type, less<pair<long int,long int>>,rb_tree_tag,tree_order_statistics_node_update>
 
int main() {
long int n,k,i;
cin>>n>>k;
vector<int> v(n);
for(i=0;i<n;i++) cin>>v[i];
ordered_set o;
for(i=0;i<k;i++) o.insert({v[i],i});
cout<<o.find_by_order((k-1)/2)->first<<" ";
for(i=1;i<n-k+1;i++){
o.erase({v[i-1],i-1});
o.insert({v[i+k-1],i+k-1}); 
cout<<o.find_by_order((k-1)/2)->first <<" ";
}
}
