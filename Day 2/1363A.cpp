#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;

		int arr[n];

		bool odd_exists = false;
		int sum = 0;
		int odds = 0;

		for(int i = 0; i<n; i++)
		{
			cin>>arr[i];
			sum += arr[i];
			if(arr[i]%2 != 0)
			{
				odd_exists = true;
				odds++;
			}
		}

		if(x == n)
		{
			if(sum%2 == 0)
			{
				cout<<"No"<<endl;
			}
			else
			{
				cout<<"Yes"<<endl;
			}
		}
		else
		{
			if(odds == n)
			{
				if(x%2 == 0)
				{
					cout<<"No"<<endl;
				}
				else
				{
					cout<<"Yes"<<endl;
				}
			}
			else
			{
				if(odd_exists)
				{
					cout<<"Yes"<<endl;
				}
				else
				{
					cout<<"No"<<endl;
				}
			}
		}

	}
	return 0;
}