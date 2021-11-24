# include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int a,b,n;
		cin>>a>>b>>n;
		if(b>a)
		{
			long long int c=a;
			a=b;
			b=c;
		}
		long long int d=a;
		long long int j=0;
		while(d<=n)
		{
			
			if(j%2==0)
			{
				a+=b;
				d=a;
			}
			else
			
			{
				b+=a;
				d=b;
			}
			j++;
		}
		cout<<j<<endl;
	}
	return 0;
}
