# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		ll n;
		cin>>n;
		string s1,s2;
		cin>>s1>>s2;
		ll ans=0;
		for(ll j=0;j<n;j++)
		{
			if(s1[j]!=s2[j]) ans+=2;
			else if(s1[j]=='0')
			{
				if(j<(n-1)&&s1[j+1]=='1'&&s2[j+1]=='1')
				{
					ans+=2;
					j++;
				}
				else ans+=1;
			}
			else
			{
				if(j<(n-1)&&s1[j+1]=='0'&&s2[j+1]=='0')
				{
					ans+=2;
					j++;
				}
			}
		}
		cout<<ans<<"\n";
	}
}
