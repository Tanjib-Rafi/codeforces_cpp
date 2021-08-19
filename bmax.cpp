#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int arr[n],x=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<arr[0]<<" ";
    for(int i=1;i<n;i++)
    {
       x=max(x,x+arr[i-1]);

        cout<<x+arr[i]<<" ";
    }
}
