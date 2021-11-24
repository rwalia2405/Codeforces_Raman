# include <iostream>
# include <string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		string s;
		cin>>s;
		cout<<s[0];
		for(int j=1;j<s.length()-1;j+=2)
		{
			cout<<s[j];
		}
		cout<<s[s.length()-1];
		cout<<endl;
	}
	return 0;
}
