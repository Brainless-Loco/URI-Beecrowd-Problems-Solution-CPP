#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,p;
    while(scanf("%lld",&n)!=EOF)
    {
        int a=0;
        if(n==1)
            cout<<1<<endl<<endl;
        else if(n>1)
        {
            m=pow(2,2*n-2);
            while(m>0)
            {
                m/=10;
                a++;
            }
            for(int i=0; i<n; i++)
            {

                for(int j=i,l=1; l<=n; l++,j++)
                {
                    p=pow(2,j);
                    if(a==1)
                        printf("%1lld",p);
                    else if(a==2)
                        printf("%2lld",p);
                    else if(a==3)
                        printf("%3lld",p);
                    else if(a==4)
                        printf("%4lld",p);
                    else if(a==5)
                        printf("%5lld",p);
                    else if(a==6)
                        printf("%6lld",p);
                    else if(a==7)
                        printf("%7lld",p);
                    else if(a==8)
                        printf("%8lld",p);
                    else if(a==9)
                        printf("%9lld",p);
                    if(l<n)
                        cout<<' ';
                }
                cout<<endl;

            }
            cout<<endl;
        }
        else
            return 0;
    }
}
