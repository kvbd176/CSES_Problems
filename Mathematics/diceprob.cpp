#include <bits/stdc++.h>
using namespace std;
 
int main() {
int n,a,b;
cin>>n>>a>>b;
vector<vector<double>> dp(n+1,vector<double>(6*n+1,0));
dp[0][0]=1.0;
for(int i=0;i<n;i++){
for(int s=0;s<=6*i;s++){
for(int x=1;x<=6;x++){
dp[i+1][s+x]+=dp[i][s]/6.0;
}
}
}
double prob=0.0;
for(int s=a;s<=b;s++){
if(s<=6*n) prob+=dp[n][s];
}
cout<<fixed<<setprecision(6)<<prob<<endl;
return 0;
}
