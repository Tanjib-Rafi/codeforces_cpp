#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,sum=0,m,i,j,k;

    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin>>n;

    int matrix[n][n];

	for(j=0;j<n;j++)
		for(k=0;k<n;++k)
			cin>>matrix[j][k];

	for(j=0;j<n;++j)
		for(k=0;k<n;++k)
		{
			if(j==k)
				sum+=matrix[j][k];
		}

	cout<<sum;
}
}
