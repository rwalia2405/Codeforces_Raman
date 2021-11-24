# include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		int even=0;
		int odd=0;
		for(int j=0;j<n;j+=2)
		{
			if(a[j]%2!=0)
			{
				even++;
			}
		}
		for(int j=1;j<n;j+=2)
		{
			if(a[j]%2==0)
			{
				odd++;
			}
		}		
		if(even==odd)
		{
			cout<<even<<endl;
		}
		else
		{
			cout<<"-1"<<endl;
		}
	}
	return 0;
}
