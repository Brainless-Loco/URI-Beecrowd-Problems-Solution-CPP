#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    long long a[n],m;
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    int an=0;
    m=a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]>=m)
        {
            an++;
            m+=a[i];
        }
    }
    cout<<++an<<endl;
}
