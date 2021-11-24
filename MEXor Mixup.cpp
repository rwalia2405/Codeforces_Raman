# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++)
	{
		ll a,b;
		cin>>a>>b;
		ll x=0;
		ll d=a-1;
		if(d%4==0) x=d;
		if(d%4==1) x=1;
		if(d%4==2) x=d+1;
		if(d%4==3) x=0;
		if(x==b) cout<<a<<"\n";
		else if((x^b)!=a) cout<<a+1<<"\n";
		else cout<<a+2<<"\n";
	}
	return 0;
}
