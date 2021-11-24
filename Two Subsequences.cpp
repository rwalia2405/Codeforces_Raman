# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string s;
		cin>>s;
		string a="";
		string b="";
		char m=s[0];
		int k=0;
		for(int j=1;j<s.length();j++)
		{
			if(s[j]<m)
			{
				k=j;
				m=s[j];
			}
		}
		a+=m;
		for(int j=0;j<s.length();j++)
		{
			if(j==k) continue;
			else b+=s[j];
		}
		cout<<a<<" "<<b<<"\n";
	}
	return 0;
}
