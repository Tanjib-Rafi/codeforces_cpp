#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
    int t;
    cin>>t;
    while(t--){
  int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);

	int i=0,j=n-1;
	vector<int> v;
	while(i<j)
	{
		v.pb(a[j]);
		v.pb(a[i]);
		i++;
		j--;
	}
	if(i==j)
	v.pb(a[i]);

	for(int i=n-1;i>=0;i--)
	cout<<v[i]<<" ";
	cout<<endl;

}
}
