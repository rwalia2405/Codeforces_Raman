# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int n,x;
		cin>>n>>x;
		vector<long long int>a(n);
		for(long long int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		sort(a.begin(),a.end());
		long long int c=0;
		long long int q=1;
		for(long long int j=n-1;j>=0;j--)
		{
			if(a[j]*q>=x)
			{
				c++;
				q=1;
			}
			else q++;
		}
		cout<<c<<endl;
	}
	return 0;
}
