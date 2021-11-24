# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		ll s = 2*(max(a,b)-min(a,b));
		if(a>s||b>s||c>s) cout<<"-1\n";
		else 
		{
			ll ans = c+(max(a,b)-min(a,b));
			ll ans1 = c-(max(a,b)-min(a,b));
			if(ans>s) cout<<ans1<<"\n";
			else cout<<ans<<"\n";
		}
	}
	return 0;
}
