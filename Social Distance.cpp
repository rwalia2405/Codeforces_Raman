# include <iostream>
# include <vector>
#include <cstdlib> 
# include <string>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	for(long long int i=0;i<t;i++)
	{
		long long int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		vector<long long int> m;
		m.push_back(-1);
		for(long long int j=0;j<s.length();j++)
		{
			if(s[j]=='1')
			{
				m.push_back(j);
			}
		}
		m.push_back(s.length());
		long long int c=0;
		for(size_t j=0;j<m.size()-1;j++)
		{
			long long int v=abs(m[j]-m[j+1]);
			if(v%(k+1)==0)
			{
				c+=((v/(k+1))-1);
			}
			else
			{
				c+=(v/(k+1));
			}
		}
		if(m.size()==2 && c==0)
		{
			c++;
		}
		cout<<c<<endl;
	}
	return 0;
}
