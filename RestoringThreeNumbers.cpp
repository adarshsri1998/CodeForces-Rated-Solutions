#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[4];
	for(int i=0;i<4;i++)
	{
		cin>>a[i];
	}
	int n = sizeof(a)/sizeof(a[0]); 
    sort(a,a+n);
    cout<<a[3]-a[0]<<" "<<a[3]-a[1]<<" "<<a[3]-a[2]<<endl; 
	return 0;

}