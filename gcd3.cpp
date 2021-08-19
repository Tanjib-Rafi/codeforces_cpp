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
		 if (S.count(v+1))
            //v++;
		cout<<v<<'\n';
	}
}
