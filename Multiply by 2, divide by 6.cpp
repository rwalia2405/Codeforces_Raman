# include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	for(long long int i=0;i<t;i++)
	{
		long long int n;
		cin>>n;
		if(n==1)
		{
			cout<<"0"<<endl;
		}
		else{
		long long int three=0;
		long long int two=0;
		while(n%3==0)
		{
			n=n/3;
			three++;
		}
		while(n%2==0)
		{
			n=n/2;
			two++;
		}
		if(three==0||n>1||two>three)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			//long long int m=min(three,two);
			long long int c=0;
			c+=two;
			c+=2*(three-two);
			cout<<c<<endl;
	}}}
	return 0;
}
