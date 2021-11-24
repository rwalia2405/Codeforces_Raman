# include <iostream>
# include <vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int a[2*n];
		for(int j=0;j<2*n;j++)
		{
			cin>>a[j];
		}
		vector<int>b,c;
		for(int j=0;j<2*n;j++)
		{
			if(a[j]%2==0)
			{
				b.push_back(j);
			}
			else
			{
				c.push_back(j);
			}
		}	
		int k=n-1;
		while(b.size()>1 &&k)
		{
			cout<<b[b.size()-1]+1<<" ";
			b.pop_back();
			cout<<b[b.size()-1]+1<<endl;
			b.pop_back();
			k--;
		}
		while(c.size()>1 &&k)
		{
			cout<<c[c.size()-1]+1<<" ";
			c.pop_back();
			cout<<c[c.size()-1]+1<<endl;
			c.pop_back();
			k--;
		}
		b.clear();
		c.clear();
	}
	return 0;
}
