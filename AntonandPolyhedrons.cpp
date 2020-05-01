#include<iostream>

using namespace std;

int main()
{
	int n,sum=0;
	string x;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x=="Tetrahedron")
		{
			sum+=4;
		}
		else if(x=="Cube")
		{
			sum+=6;
		}
		else if(x=="Octahedron")
		{
			sum+=8;
		}
		else if(x=="Dodecahedron")
		{
			sum+=12;
		}
		else if(x=="Icosahedron")
		{
			sum+=20;
		}
	}
	cout<<sum;
	return 0;
}