#include<bits/stdc++.h>
using namespace std;

long long int rev(long long int x)
{
	long long int temp = 0;
	while(x>0)
	{
		temp = (temp*10) + (x%10);
		x = x/10;
	}
	return temp;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int x,y;
		cin>>x>>y;

		long long int xr = rev(x);
		long long int yr = rev(y);
		long long int ansr = xr + yr;
		long long int ans = rev(ansr);

		cout<<ans<<endl;
	}
	return 0;
}