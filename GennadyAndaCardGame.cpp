#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a,b,c,d,e,f;
	int i,n=0;
	cin>>a;
	cin>>b>>c>>d>>e>>f;
	for(i=0;i<2;i++)
	{
		if((a[i]==b[i])||(a[i]==c[i])||(a[i]==d[i])||(a[i]==e[i])||(a[i]==f[i]))
			n++;
	}
	if(n!=0)	
		cout<<"YES";
	else	
		cout<<"NO";
	return 0;
}

