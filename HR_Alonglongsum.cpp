#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long int sum=0,a[10];
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		sum+=a[i];
	}
	cout<<sum;


	return 0;
}

