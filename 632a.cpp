#include<bits/stdc++.h>
using namespace std;
int main()
{

	int i,j,t,r,c,k;
	//int arr[r][c];
	cin>>t;
	for(i=1;i<=t;t++)
	{
		cin>>r>>c;
		int arr[r][c];
		for(j=1;j<=r;j++)
		{
			for(k=1;k<=c;k++)
			{
				if(arr[j]==arr[j+1])
			
				cout<<"W";
			}
		}
	}
}
