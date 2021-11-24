# include <iostream>
# include <vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		long long int n;
		cin>>n;
		vector<long long int> a;
		while(n>0)
		{
			a.push_back(n%10);
			n=n/10;
		}
		for(int j=0;j<a.size();j++)
		{
			
			cout<<a[j];
		}
		cout<<endl;
	}
	return 0;
}
