#include<bits/stdc++.h>
#include<iostream>
#include <vector>
using namespace std;

int main()
{
    int i,j,n,count=0,sum=0,value;
    cin >> n;
   vector<int>k;
    for(i=0;i<n;i++)
    {
        cin>>value;
       k.push_back(value);
    }
    for(i=0;i<n;i++)
    {
        cout << k[i] <<"\n";
    }
    for(i=1;i<=k.size();i++){
        for(j=i+1;j<=k.size();j++)
            {
             if(k[i]==k[j]){
                count++;
                    sum=sum+count;
             }
    else
        continue;
        }
    }
    cout<<sum;


}
