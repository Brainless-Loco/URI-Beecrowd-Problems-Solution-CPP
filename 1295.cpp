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
#define fraction() cout.unsetf(ios::floatfield); cout.precision(4); cout.setf(ios::fixed,ios::floatfield);

///******************************** C o d e ********************************///

bool srt(const pll &a,const pll &b)
{
    if(a.F==b.F) return a.S<b.S;
    return a.F<b.F;
}

main()
{
    ll n,i,j;
    double a,b,c;
    fraction()
    while(cin>>n){
        if(!n) break;
        vll v;
        forn(i,n){
            cin>>a>>b;
            v.pb({a,b});
        }
        c=11111.0;
        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++)
                c=min(c,sqrt(sqr(v[i].F-v[j].F)+sqr(v[i].S-v[j].S)));
        }
        if(c<1000.00) cout<<c el;
        else cout<<"INFINITY" el;
    }

}


///Thank you.


///Brainless_Loco Terminates Here!
