/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,i,t,count;
    cin>>n;

    for(t=1;t<=n;t++)
    {
    cin>>a>>b;
    count=0;
    for(i=1;((a%b)!=0);i++)
    {
        count=count+1;
        a=a+1;
    }
    cout<<count<<endl;
    }
}*/
#include<iostream>
using namespace std;
int main()
{
    int n,a,b,i,t;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<0<<endl;
        }

    else{
        cout<<b-(a%b)<<endl;
    }
}
}
