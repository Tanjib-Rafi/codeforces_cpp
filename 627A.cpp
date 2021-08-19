/*#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
#define FAST ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a[n];
        int e=0,o=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                e++;
            else
                o++;
        }

        if(e==0 || o==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}*/
#include<iostream>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    for(k=1;k<=t;k++){
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int a=arr[0];
        bool flag=true;
        for(int i=1;i<n;i++){
            if((arr[i]%2)!=(a%2)){
                flag=false;

            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}





