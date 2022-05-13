#include<bits/stdc++.h>
using namespace std;

///******************************** C o n t a i n e r ********************************///

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;

///*********************************** C o n s t ***********************************///

const int       N=1e6+123;
const double    PI = acos(-1);
const ll        MOD=1000000007;                 ///1e9+7
ll dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};       ///first 4 for adjacent
ll dy[] = {0, +1, 0, -1, +1, -1, +1, -1};
ll dx8[]= {+1, +1, -1, -1, +2, +2, -2, -2};    ///knights move
ll dy8[]= {+2, -2, +2, -2, +1, -1, +1, -1};

///********************************** M a r c o ***********************************///

#define pb push_back
#define MP make_pair
#define F first
#define S second
#define test int tc; cin>>tc; while(tc--)
#define forn(i,n) for(i=0;i<n;i++)
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define sz(x) x.size()
#define el <<'\n'
#define sp <<' '
#define print(a) {for(auto x:a)cout<<x<<" ";cout<<endl;}
#define mem(a,b) memset(a, b, sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define sqr(a) (a)*(a)

#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

///*********************************** F u n c t i o n ***********************************///

ll powmod(ll a,ll b){ a%=MOD;if(!a) return 0;ll pr=1;while(b>0){if(b&1){pr*=a;pr%=MOD;--b;}a*=a;a%=MOD;b/=2;}return pr;}
ll modinverse(ll a){return powmod(a,MOD-2);}
bool isPrime(ll n){ if(n<=1)return false;if(n<=3)return true;if(n%2==0 or n%3==0)return false;for(ll i=5;i*i<=n;i+=6){if(n%i==0 or n%(i+2)==0)return false;}return true;}
void seive(bool a[]){ll mx=sqrt(N),ii,jj;for(ii=3;ii<=mx;ii+=2)if(!a[ii])for(jj=ii*ii;jj<N;jj+=2*ii)a[jj]=true;}
void numofdiv(ll a[]){ll mx=sqrt(N),ii,jj;for(ii=1;ii<=mx;ii++){for(jj=ii*ii;jj<N;jj+=ii){if(jj==ii*ii) a[jj]++; else a[jj]+=2;}}}
void sumofdiv(ll a[]){ll mx=sqrt(N),ii,jj;for(ii=1;ii<=mx;ii++){for(jj=ii*ii;jj<N;jj+=ii){if(jj==ii*ii) a[jj]+=ii; else a[jj]+=ii+jj/ii;}}}

///**************************************************** C o d e ****************************************************///
///-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=///
ll n,m,k;

main()
{
    while(cin>>n>>m and n+m){
        ll v[n+1][n+1],lev[n+1];
        for(ll i=1;i<=n;i++) for(ll j=1;j<=n;j++)v[i][j]=INT_MAX;
        while(m--){
            ll a,b,c;
            cin>>a>>b>>c;
            if(v[b][a]!=INT_MAX) v[a][b]=v[b][a]=0LL;
            else v[a][b]=c;
        }
        cin>>k;
        while(k--){
            ll a,b; cin>>a>>b;
            for(auto& i : lev) i=INT_MAX;
            queue<ll> q;
            q.push(a);
            lev[a]=0;
            while(!q.empty()){
                ll x=q.front(); ///x is negative cost for yth node
                q.pop();
                for(ll i=1;i<=n;i++){

                    if(v[x][i]!=INT_MAX and lev[i]>v[x][i]+lev[x]){

                        lev[i]=v[x][i]+lev[x];

                        q.push(i);
                    }
                }
            }
            if(lev[b]!=INT_MAX) cout<<lev[b]<<endl;
            else cout<<"Nao e possivel entregar a carta"<<endl;
        }
        cout<<endl;
    }

}


///Thank you.


///Brainless_Loco Terminates Here!
