#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
sort(s.begin(),s.end());
set<string> s1;
do{
s1.insert(s);
}while(next_permutation(s.begin(),s.end()));
cout<<s1.size()<<endl;
for(auto i:s1){
cout<<i<<endl;
}
}
