# include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		ll k;
		cin>>k;
		ll sq = int(sqrt(k));
		if(sq*sq==k)
		{
			cout<<sq<<" "<<"1\n";
		}
		else
		{
			ll b = sq*sq;
			ll r=1;
			ll c = 1;
			if(b+sq>=k)
			{
				c=sq+1;
				r=k-b;
			}
			else
			{
				r=sq+1;
				c=((sq+1)*(sq+1))-k+1;
			}
			cout<<r<<" "<<c<<"\n";
		}
	}
	return 0;
}
