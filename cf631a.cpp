#include <bits/stdc++.h>
using namespace std;
int main() {
	int T; cin>>T; while (T--) {
		int N, X; cin>>N>>X;
		int a;
		set<int> S;
		for(int n=0;n<N;n++)
            {
            cin>>a;
            S.insert(a);
            }
		int v=0;
		while(X)
            {
            v++;
			if (!S.count(v))
            X--;
		    }
		 while (S.count(v+1))
            v++;
		cout<<v<<'\n';
	}
}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t, n,k,i,ans; cin>>t; int a;set<int>s;
 while(t--)
 {
 cin>>n>>k;
 s.clear();
 for(i=0;i<n;i++)
  {
  cin>>a;s.insert(a);
  }
 for(i=1;k;i++)
 {
    if(!s.count(i)) k--;
 }
 while(s.count(i)) i++;
 i--;
 cout<<i<<endl;
 }
}*/
