# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m;
		cin>>n>>m;
		ll a[m];
		for(int j=0;j<m;j++)
		{
			cin>>a[j];
		}
		ll ans=0;
		for(int j=1;j<m;j++)
		{
			for(int k=0;k<j;k++)
			{
				cout<<a[k]<<" "<<a[j]<<"\n";
				if(a[k]<a[j]) ans++;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
