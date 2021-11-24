# include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		int s=n;
		int a[n][n]={0};
		int m=n;
		int j=1;int k=0; int l=0;
		while(k<m && l<n)
		{
			for(int p=l;p<n;p++)
			{
				a[k][p]=j;
				j++;
			}
			k++;
            for (int p = k; p < m; p++) { 
            a[p][n-1]=j;
			j++; 
            } 	
			n--;
            if (k < m) { 
                for (int p = n - 1; p >= l; p--) { 
                a[m - 1][p]=j;
				j++; 
                } 
                m--; 
            }
            if (l < n) { 
            for (int p = m - 1; p >= k; p--) { 
                a[p][l]=j;
				j++; 
            } 
            l++; 
        }			 					
		}
		for(int z=0;z<s;z++)
		{
			for(int q=0;q<s;q++)
			{
				cout<<a[z][q]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
