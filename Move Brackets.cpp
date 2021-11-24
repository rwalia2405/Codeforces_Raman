# include <bits/stdc++.h>
# include <string>
# include <stack>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		stack<char> a;
		int c=0;
		int d=0;
		for(int j=0;j<n;j++)
		{
			if(s[j]=='(')
			{
				a.push(s[j]);
			}
			else
			{
				if(!a.empty())
				{
					a.pop();
				}
				else
				{
					c++;
				}
			}
		}
		cout<<c<<endl;
	}
	return 0;
}
