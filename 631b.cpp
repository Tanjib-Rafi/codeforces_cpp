#include <bits/stdc++.h>

using namespace std;

/****************** DataType *******************/

typedef long long int 			ll;
typedef long int				l;
typedef long double				ld;
typedef double					dd;
typedef unsigned long long int	ull;
typedef unsigned int 			ui;
typedef vector<int>				vi;
typedef vector<vi>          	vvi;
typedef vector<ll>          	vll;
typedef vector<vll>				vvll;
typedef pair<int,int>       	pii;
typedef pair<ll,ll>         	pll;
typedef vector<pii>				vii;
typedef set<int>				si;

/****************** Define *******************/

#define INF 1llu<<61    // 2,305,843,009,213,693,952
#define inf 1<<29       // 536,870,912
#define PI 3.14159265358979323846
#define sf scanf
#define pf printf
#define pb push_back
#define pob pop_back
#define puf push_front
#define mp make_pair
#define ff first
#define ss second
#define SQR(x) ((x)*(x))
#define loop(i, y) for(int i = 0; i < int(y); i++)
#define FOR(i, x, y) for(int i = int(x); i <= int(y); i++)
#define ROF(i, y, x) for(int i = int(y-1); i >= int(x); i--)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define FileIO freopen("input.txt", "r", stdin);   freopen("output.txt", "w", stdout);
#define FastIO ios::sync_with_stdio(false);cin.tie(0);
#define FixedPrecision(x) ios::sync_with_stdio(false); cout.setf(ios::fixed); cout.precision(x); cin.tie(0);
#define start_time clock_t tStart = clock();
#define execution_time printf("\n>>Time taken: %.10fs\n", (double) (clock() - tStart) / CLOCKS_PER_SEC);

/***************** Template ******************/

template <class T> inline T bigMod(T p,T e,T M){ ll ret = 1; for(; e > 0; e >>= 1){ if(e & 1) ret = (ret * p) % M; p = (p * p) % M; } return (T) ret;}
template <class T> inline T modInverse(T a,T M){return bigMod(a,M-2,M);}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T lcm(T a,T b) {a=abs(a);b=abs(b); return (a/gcd(a,b))*b;}
template <class T> inline T diss(T x1,T x2,T y1 , T y2) {return sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));}
template <class T> inline string int2String(T a){ostringstream str; str << a; return str.str();}
template <class T> inline T string2int(string a){stringstream str(a); T b; str>>b; return b;}

/**********************************************/

int main()
{
    ///READ("input.txt");

    #ifndef ONLINE_JUDGE
    start_time;
    //FileIO;
    #else
    FastIO;
    #endif


    long long int tc, n, x, arr[300], grr[300];

    cin >> tc;

    while(tc--)
    {
        for(int i = 0; i < 300; i++) 
		arr[i] = 0;
        cin >> n >> x;
        
        for(int i = 0; i < n; i++)
		cin >> grr[i];

        for(int i = 0; i < n; i++) 
		arr[grr[i]] = 1;

        for(int i = 1; i < 300; i++)
        {
            if(arr[i] == 0)
            {
                arr[i] = 1;
                x--;
            }
            if(x == 0) break;
        }
        
        for(int i = 1; i < 300; i++)
        {
            if(arr[i] == 0)
            {
                cout << i-1 << endl;
                break;
            }
        }
    }


    #ifndef ONLINE_JUDGE
    execution_time;
    #endif


    return 0;
}
