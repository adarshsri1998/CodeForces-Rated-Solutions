#include<iostream>

using namespace std;

int main()
{
	int i,n,l=0;
	cin>>n;
	for(int i = 1; i <= (n-1); ++i)
	{
		if(n%i==0)
		{
			l++;
		}
	}
	cout<<l;
	return 0;
}

