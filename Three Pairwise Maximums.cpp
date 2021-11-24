# include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	for(long long int i=0;i<t;i++)
	{
		vector<long long int>a(3);
		cin>>a[0]>>a[1]>>a[2];
		sort(a.begin(),a.end());
		if(a[1]!=a[2]) cout<<"NO"<<"\n";
		else
		{
			cout<<"YES"<<"\n";
			cout<<a[1]<<" "<<a[0]<<" "<<a[0]<<"\n";
		}
	}
	return 0;
}
