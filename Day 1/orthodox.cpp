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

		long long int a[n];
		string ans;
		set<long long int> s;

		for(int i = 0; i<n; i++)
		{
			cin>>a[i];
		}

		if(n>63)
		{
			ans = "NO";
		}
		else
		{
			for(int i = 0; i<n; i++)
			{
				long long int val = a[i];
				for(int j = i; j < n; j++)
				{
					val = val | a[j];
					s.insert(val);
				}
			}

			if(s.size() != (n*(n+1)/2))
			{
				ans = "NO";
			}
			else
			{
				ans = "YES";
			}
		}

		cout<<ans<<endl;
	}
	return 0;
}