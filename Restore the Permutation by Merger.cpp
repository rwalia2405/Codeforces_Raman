# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		vector<int>a(2*n);
		for(int j=0;j<2*n;j++)
		{
			cin>>a[j];
		}
		vector<int>b;
		unordered_map<int,int>m;
		for(int j=0;j<2*n;j++)
		{
			m[a[j]]++;
			if(m[a[j]]>1) continue;
			else b.push_back(a[j]);
		}
		for(int j=0;j<b.size();j++)
		{
			cout<<b[j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
