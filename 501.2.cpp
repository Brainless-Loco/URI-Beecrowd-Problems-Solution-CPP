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

main()
{
    optimize();
    test{
        string s;
        int i,n,a[4],b[4];
        cin>>s;
        n=sz(s);
        b[0]=b[1]=b[2]=b[3]=0;
        forn(i,n){
            if(s[i]=='J'&&!b[0]) {a[0]=i; b[0]++;}
            else if(s[i]=='A'&&!b[1]) {a[1]=i; b[1]++;}
            else if(s[i]=='Q'&&!b[2]) {a[2]=i; b[2]++;}
            else if(s[i]=='K'&&!b[3]) {a[3]=i; b[3]++;}
        }
        if(a[0]<a[1]&&a[1]<a[2]&&a[2]<a[3]) cout<<"Agora apertou sem abracar" el;
        else cout<<"Agora vai" el;

    }
}










//Brainless_Loco Terminates Here!
