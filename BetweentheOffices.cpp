#include<bits/stdc++.h>

using namespace std;

int main()
{	int i,n,S=0,F=0;
	string s;
	cin>>n>>s;
	for(i=0;i<n;i++)
	{
		if((s[i]=='S')&&(s[i+1]=='F'))
			S++;
		else
		if((s[i]=='F')&&(s[i+1]=='S'))
			F++;			
	}
	if(S>F)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}

