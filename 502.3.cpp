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
#define MOD 1000000007

#define PB push_back
#define F first
#define S second
#define test int tc; cin>>tc; while(tc--)
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define el <<'\n'
#define sp <<' '

#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (abs(a*b)/gcd(a,b))
#define sqr(a) (a*a)

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

///binary to decimal
long double btod(string a){
    long double i,c=sz(a)-1,s=0,d=0;
    for(i=c;i>=0;i--){
        a[i]-=48;
        s+=a[i]*pow(2,d);
        d++;
    }
    return s;
}

main()
{
    //optimize();
    ll n,i,j,k;
    while(scanf("%lld %lld",&n,&k)==2){
        ll a[n],b[n];
        for(i=0;i<n;i++){cin>>a[i]; b[i]=a[i];}
        k--;
        while(k--){
            for(i=0;i<n-1;i++){
                swap(a[i],a[n-1]);
                b[i]+=a[i];
            }
            b[i]+=a[i];
        }
        for(i=0;i<n;i++) {
            if(i==n-1) cout<<b[i] el;
            else cout<<b[i] sp;
        }
    }
}










