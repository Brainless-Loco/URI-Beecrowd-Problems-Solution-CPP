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

#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (abs(a*b)/gcd(a,b))
#define sqr(a) (a*a)

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
int s[26];
main()
{
    optimize();
    string a;
    cin>>a;
    int i,n,sum=0,c=0;
    n=sz(a);
    for(i=0;i<n;i++){
        if(a[i]=='a') continue;
        a[i]-='a';
        s[a[i]]++;
    }
    for(i=0;i<26;i++){
        sum+=(s[i]/2)*2;
        if(s[i]&1) c=1;
    }
    cout<<sum+c el;
}










//Brainless_Loco Terminates Here!
