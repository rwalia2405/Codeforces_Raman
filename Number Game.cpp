# include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int n;
		cin>>n;
		if(n==1)
		{
			cout<<"FastestFinger"<<endl;
		}
		else if(n==2)
		{
			cout<<"Ashishgup"<<endl;
		}
		else if(n%2!=0)
		{
			cout<<"Ashishgup"<<endl;
		}
		else
		{
			long long int d=n;
			while(d%2==0)
			{
				d=d/2;
			}
			if(d==1)
			{
				cout<<"FastestFinger"<<endl;
			}
			else
			{
				if(n/d==2)
				{
					cout<<"FastestFinger"<<endl;
				}
				else{
				
				cout<<"Ashishgup"<<endl;}
			}
		}
	}
	return 0;
}
