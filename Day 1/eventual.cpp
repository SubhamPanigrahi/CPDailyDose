#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		string s;
		cin>>s;

		map<char, int>mp;

		for(int i = 0; i<n; i++)
		{
			mp[s[i]]++;
		}

		string ans = "YES";

		if(n%2 == 0){
		map<char, int>::iterator it;
		for(it = mp.begin(); it!= mp.end(); it++)
		{
			if(((*it).second)%2 != 0)
			{
				ans = "NO";
				break;
			}
		}
		}
		else
		{
			ans = "NO";
		}

        cout<<ans<<endl;
	}
	return 0;
}