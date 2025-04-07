#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b;
    cin>>a>>b;
    int i,j,k;
    vector<vector<int>> dp(a+1,vector<int>(b+1,1e9));
    for(i=1;i<=a;i++){
        for(j=1;j<=b;j++){
            if(i==j){
            	dp[i][j]=0;
            	continue;
			}
			for(k=1;k<=i-1;k++) dp[i][j]=min(dp[i][j],dp[k][j]+dp[i-k][j]+1);
			for(k=1;k<=j-1;k++) dp[i][j]=min(dp[i][j],dp[i][k]+dp[i][j-k]+1);
        }
    }
    cout<<dp[a][b]<<endl;
}
