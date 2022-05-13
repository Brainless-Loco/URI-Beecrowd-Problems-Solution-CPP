#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[10000];
    while(scanf("%[^\n]s",s)!=EOF)
    {
        if(s[0]=='*') return 0;
        int l=1;
        s[0]=toupper(s[0]);
        for(int i=1;i<strlen(s);i++)
        {
            if(s[i]==' ')
            {
                s[i+1]=toupper(s[i+1]);
                if(s[i+1]!=s[0])
                {cout<<'N'<<endl;l=0;break;}
            }
        }
        if(l)
            cout<<'Y'<<endl;
        scanf("\n");
    }
}
