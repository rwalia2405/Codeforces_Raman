# include <iostream>
# include <string>
# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string str;
		cin>>str;
		long long int r=0;
		long long int p=0;
		long long int s=0;
		for(int j=0;j<str.length();j++)
		{
			if(str[j]=='R') r++;
			else if(str[j]=='S') s++;
			else p++;
		}
		//cout<<r<<s<<p<<endl;
		long long int q=max(r,s);
		long long int m=max(q,p);
		if(m==r)
		{
			for(int j=0;j<str.length();j++)
			{
				cout<<"P";
			}
		}
		else if(m==s)
		{
			for(int j=0;j<str.length();j++)
			{
				cout<<"R";
			}			
		}
		else
		{
			for(int j=0;j<str.length();j++)
			{
				cout<<"S";
			}			
		}
		cout<<endl;
	}
	return 0;
}
