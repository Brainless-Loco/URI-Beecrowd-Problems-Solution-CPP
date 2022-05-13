#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;

const double PI = acos(-1);
#define MOD 1000000007  ///1e9+7

#define pb push_back
#define F first
#define S second
#define test int tc; cin>>tc; while(tc--)
#define forn(i,n) for(i=0;i<n;i++)
#define rforn(i,n) for(i=n-1;i>=0;i--)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define sz(x) x.size()
#define el <<'\n'
#define sp <<' '

#define mem(a,b) memset(a, b, sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define sqr(a) (a)*(a)

#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

///******************************** C o d e ********************************///



main()
{
    ll n,a;
    vl odd,even;
    cin>>n;
    while(n--){
        cin>>a;
        if(a%2) odd.pb(a);
        else even.pb(a);
    }
    sort(all(even)),sort(rall(odd));
    for(auto i:even) cout<<i el;
    for(auto i:odd) cout<<i el;
}


///Thank you.


///Brainless_Loco Terminates Here!
