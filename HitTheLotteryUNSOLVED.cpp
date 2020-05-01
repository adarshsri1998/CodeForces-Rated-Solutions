#include<bits/stdc++.h>

using namespace std;

int main()
{	int x,n;
	cin>>x;
	do{
	if(x>=100)
	{
		x/=100;
		n+=1;
	}
	else
		if(x<100&&x>=20)
	{
		x/=20;
		n+=1;
	}
	else
		if(x<20&&x>=10)
	{
		x/=10;
		n+=1;
	}
	else
		if(x<10&&x>=5)
	{
		x/=5;
		n+=1;
	}else
		if(x<5&&x>=1)
	{
		x--;
		n+=1;
	}
	}while(x0);

	cout<<n;
}