#include<bits/stdc++.h>
using namespace std;
int dp[11][11];
int main()
{
	int n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cin>>dp[i][j];
		}
	}
	if(n>1)
	{
		for(int i=2;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
			{
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+dp[i][j];
			}
		}
		for(int i=1;i<=n;i++)
		{
			ans=max(ans,dp[n][i]);
		}
		cout<<ans<<endl;
	}
	else cout<<dp[1][1]<<endl;
	return 0;
}