#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
    int n,x,ans=0;
    cin>>n;
    map<int,int>m;
    for(int i=0;i<n&&cin>>x;i++)
        {
            m[x]++;
            cout<<m[x];
        ans=max(ans,m[x]);
        }
    if(ans>m.size())
    cout<<m.size();
    else if(ans==m.size())
        cout<<ans-1;
    else cout<<ans;cout<<"\n";
    }
}


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a[200001]={0},m,x=0,y=-1;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>m;
			a[m]++;
			if(a[m]==1)
			x++;
			y=max(y,a[m]);
		}
		x--;
		cout<<max( min(x,y) ,min(x+1,y-1) )<<endl;
	}
}


 #import<bits/stdc++.h>
using namespace std;
int i,k,m,n,p,t,a[200040];
main()
{
	for(cin>>t;t--;)
	{
		cin>>n;
		for(i=0;i++<n;)cin>>a[i];
		sort(a,a+n+1);
		for(i=k=0,m=1;i++<n;)
		{
			if(a[i]^a[i-1])
			{
				k++;
				p=1;
			}
			else m=max(m,++p);
		}
		cout<<(m^k?min(m,k):k-1)<<endl;
	}
}*/
