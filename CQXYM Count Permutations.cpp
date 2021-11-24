# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
ll fact(ll a)
{
	ll ans=1;
	for(ll j=a;j>=a/2;j--)
	{
		ans=(ans*j)%1000000007;
	}
	return ans;
}
int main()
{
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		ll n;
		cin>>n;
		if(n==1) cout<<"1\n";
		else cout<<fact(2*n)<<"\n";
	}
	return 0;
}
