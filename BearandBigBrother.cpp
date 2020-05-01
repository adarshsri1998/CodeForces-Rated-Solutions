#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a=0,b=0,i=1;
	cin>>a>>b;
	for(int i=0;i<10;i++)
	{	if(a>b)
		{
			cout<<i;
			break;
		}
		else
		{
			a*=3;
			b*=2;
		}		
	}

return 0;
}