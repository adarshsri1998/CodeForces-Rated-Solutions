#include<bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{	int n,q=0;
	string s;
	cin>>n;
	while(n--)
	{
		cin>>s;
		q=s.size();
		if(s[q-1]=='o')
			cout<<"FILIPINO"<<endl;
		else
			if(s[q-1]=='u')
			cout<<"JAPANESE"<<endl;
		else
			if (s[q-1]=='a')
			cout<<"KOREAN"<<endl;
	}
	return 0;
}
