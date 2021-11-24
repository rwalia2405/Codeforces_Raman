# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int k;
		cin>>k;
		int j=0;
		while(k)
		{
			j++;
			if(j%10==3||j%3==0) continue;
			else k--;
		}
		cout<<j<<"\n";
	}
	return 0;
}
