#include<bits/stdc++.h>
using namespace std;
string s1,ss;
int subset(int mains,int anothers)
{
    for(int i=0;i<mains;i++)
    {
        int j;
        for(j=0;j<anothers;j++)
        {
            if(s1[i+j]!=ss[j])
                break;
        }
        if(j==anothers)
            return 1;
    }
    return 0;
}
int main()
{
    cout<<"Enter Main String ";
    cin>>s1;
    cout<<"Enter The String U Want To Check ";
    cin>>ss;
    int mains=s1.length();
    int anothers=ss.length();
    int rslt=subset(mains,anothers);
    if(rslt)
        cout<<ss<<" is a substring of "<<s1<<endl;
    else
        cout<<"Not a substring"<<endl;
    return 0;
}

