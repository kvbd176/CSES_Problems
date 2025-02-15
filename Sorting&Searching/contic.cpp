#include<bits/stdc++.h>
using namespace std;
int main(){
	long int m,n,i;
	cin>>n>>m;
	vector<long int> tic(n);
	vector<long int> cust(m);
	set<pair<long int,long int>> sortic;
	for(i=0;i<n;i++){
		cin>>tic[i];
		sortic.insert({tic[i],i});
	}
	for(i=0;i<m;i++) cin>>cust[i];
	for(i=0;i<m;i++){
		auto temp=sortic.lower_bound({cust[i]+1,0});
		if(temp==sortic.begin()) cout<<-1<<endl;
		else{
			temp--;
			cout<<(*temp).first<<endl;
			sortic.erase(temp);
		}
	}
}
