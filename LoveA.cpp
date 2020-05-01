#include<bits/stdc++.h>

using namespace std;

int main()
{	string s;
	int a=0,b=0,c;
	cin>>s;
	c=s.size();
	for (int i = 0; i < c; ++i)
	{
		if(s[i]=='a')
			a++;
		else
			b++;
	}
	if(a>b)
		cout<<c;
	else 
	{
		b-=a;
			
	}
	return 0;
}

