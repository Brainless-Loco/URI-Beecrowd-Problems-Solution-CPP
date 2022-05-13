#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll dx[] = {+1, 0, -1, 0};       ///first 4 for adjacent
ll dy[] = {0, +1, 0, -1};

#define MP make_pair
#define F first
#define S second

ll t,ans,ts,n,ax,bx,cx,ay,by,cy;
string a[15];
struct pos{
    ll AX,AY,BX,BY,CX,CY;
};
bool val(ll x,ll y){return (x>=0 and x<n and y>=0 and y<n);}
bool ok=false;
void bfs()
{
    struct pos ap={ax,ay,bx,by,cx,cy};
    ll u=ap.AX,v=ap.AY,w=ap.BX,x=ap.BY,y=ap.CX,z=ap.CY;
    queue<struct pos> q;
    ll lev[n+2][n+2][n+2][n+2][n+2][n+2];
    memset(lev,0,sizeof(lev));
    lev[u][v][w][x][y][z]++;
    q.push(ap);
    while(!q.empty()){
        struct pos tmp=q.front(); q.pop();
        u=tmp.AX,v=tmp.AY,w=tmp.BX,x=tmp.BY,y=tmp.CX,z=tmp.CY;

        for(ll i=0;i<4;i++){
            ll U=u+dx[i],V=v+dy[i];
            ll W=w+dx[i],X=x+dy[i];
            ll Y=y+dx[i],Z=z+dy[i];
            bool ok1=false,ok2=false,ok3=false;

            if(!val(U,V) or a[U][V]=='#') U=u,V=v,ok1=true;
            if(!val(W,X) or a[W][X]=='#') W=w,X=x,ok2=true;
            if(!val(Y,Z) or a[Y][Z]=='#') Y=y,Z=z,ok3=true;

            if(MP(U,V)==MP(W,X)){
                if(ok2){ U=u; V=v; ok1=true;}
                if(ok1){ W=w; X=x; ok2=true;}
            }
            if(MP(Y,Z)==MP(W,X)){
                if(ok2){ Y=y; Z=z; ok3=true;}
                if(ok3){ W=w; X=x; ok2=true;}
            }
            if(MP(U,V)==MP(Y,Z)){
                if(ok3){ U=u; V=v; ok1=true;}
                if(ok1){ Y=y; Z=z; ok3=true;}
            }

            if(MP(U,V)==MP(W,X) or MP(W,X)==MP(Y,Z) or MP(U,V)==MP(Y,Z)) continue;  ///if two or more of A,B,C in same position

            if(lev[U][V][W][X][Y][Z]) continue;         ///pre-visited

            lev[U][V][W][X][Y][Z]=lev[u][v][w][x][y][z]+1;

            if(a[U][V]==a[W][X] and a[W][X]==a[Y][Z] and a[Y][Z]=='X'){ ///reached destination
                ok=true; ans=lev[U][V][W][X][Y][Z];
                return;
            }
            struct pos temp={U,V,W,X,Y,Z};
            q.push(temp);
        }
    }
}

int main()
{
    cin>>ts;
    while(ts--){
        cin>>n;
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(a[i][j]=='A') ax=i,ay=j;
                else if(a[i][j]=='B') bx=i,by=j;
                else if(a[i][j]=='C') cx=i,cy=j;
            }
        }
        bfs();
        cout<<"Case "<<++t<<": ";
        if(ok==true) cout<<ans-1<<'\n';
        else cout<<"trapped"<<'\n';
        ans=0;
        ok=false;

    }
    return 0;
}


///Thank you.


///Brainless_Loco Terminates Here!
