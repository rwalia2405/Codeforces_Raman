# include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t=0;
	cin>>t;
	for(long long int i=0;i<t;i++)
	{
		long long int x,y,n;
		cin>>x>>y>>n;
		long long int z=(n-y)/x;
		cout<<(x*z)+y<<endl;
	}
	return 0;
}
