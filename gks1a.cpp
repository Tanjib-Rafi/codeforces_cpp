#include<bits/stdc++.h>
using namespace std;
int main()
{
int t,i,n,s,j;
cin>>t;
for(i=1;i<=t;i++)
{
    cin>>n>>s;
    int a[n];
    for(j=0;j<n;j++)
        cin>>a[j];
        sort(a, a+n);
         int co=0;
            for(j=0;j<n;j++)
                {
                    if(s>=a[j])
                    {
                    co++;
                    s=s-a[j];
                }
                }
            cout<<"Case #" << i <<": " << co<<endl;
}
}

