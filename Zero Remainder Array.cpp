# include <bits/stdc++.h>
# include <vector>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	for(long long int i=0;i<t;i++)
	{
		long long int n,k;
		cin>>n>>k;
		long long int a[n];
		for(long long int j=0;j<n;j++)
		{
			cin>>a[j];
		}
		vector<long long int>b;
		for(long long int j=0;j<n;j++)
		{
			if(a[j]%k==0)
			{
				continue;
			 } 
			 else
			 {
			 	long long int p=a[j]/k;
			    b.push_back(((p+1)*k)-a[j]);			 	
			 }
		}
		if(b.empty())
		{
			cout<<"0"<<endl;
		}
		else{
		sort(b.begin(),b.end());
	//	for(long long int q=0;q<b.size();q++)
	//	{
	//		cout<<b[q]<<" ";
	//	}
	//	cout<<endl;
		long long int x=0;
		long long int c=0;
		x+=b[0];
		c+=b[0];
		b.erase(b.begin()+0);
		x++;
		c++;
		while(b.size())
		{
			if(binary_search(b.begin(), b.end(), x))
			{
				long long int index=lower_bound(b.begin(),b.end(),x)-b.begin();
				b.erase(b.begin()+index);
				x++;
				c++;
			}
			else if(x<b[0])
			{
				long long int r=b[0]-x;
				x=x+r;
		        c=c+r;
		        b.erase(b.begin()+0);
		        x++;
				c++;				
			}
			else
			{
				for(long long int m=0;m<b.size();m++)
				{
					b[m]+=k;
				}
			  //	cout<<b[0]<<endl;
			//	cout<<x<<endl;
				//cout<<c<<endl;
				long long int r=b[0]-x;
				x=x+r;
		        c=c+r;
		        b.erase(b.begin()+0);
		        x++;
				c++;		
			}
		 } 
		 cout<<c<<endl;
	}}
	return 0;
}
