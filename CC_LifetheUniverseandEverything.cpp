#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[99],n=0;
	for (int i = 0; i <99; ++i)
	{
		cin>>a[i];
		n++;
	}
	for (int i = 0; i < n; ++i)
	{
		if(a[i]==42)
			break;
		else
			cout<<a[i]<<endl;
	}
	return 0;
}

