#include<iostream>
using namespace std;
int main()
{
    int i,n,s=0,cnt=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        {
            cin>>a[i];
        if(a[i]!=-1)
            {
                s=s+a[i];
            }

             else if(s==0)
            {
                cnt=cnt+1;
            }
            else
            {
                s=s-1;
             }
        }

    cout<<cnt<<endl;
}


