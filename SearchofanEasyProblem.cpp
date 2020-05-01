#include<iostream>

using namespace std;

int main()
{
	int n,x,res=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{	
		cin>>x;
		if(x!=0)
		  {
			res=1;
			break;
		  }
		else
			res=0;
	}
	if(res!=0)
		cout<<"HARD";
	else
		cout<<"EASY";
	return 0;
}