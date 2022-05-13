#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    int n,m;
    while(t--)
    {
        scanf("%d %d",&n,&m);
        double lg=log10(n);
        lg*=m;
        cout<<floor(lg)+1<<endl;
    }
}
