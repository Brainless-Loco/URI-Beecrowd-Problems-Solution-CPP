#include<bits/stdc++.h>
using namespace std;
main()
{
    char a[10];
    int s,i,j=3;
    while(j--){
        s=0;
        if(j!=2)
                scanf("\n");
        while(scanf("%[^\n]",a))
        {
            if(!strcmp(a,"caw caw"))
            {
                printf("%d\n",s);
                break;
            }
            if(strlen(a)==3)
            {
                for(i=0; i<3; i++)
                {
                    if(a[i]=='*')
                        s+=pow(2,2-i);
                }
                scanf("\n");
            }
        }
    }
}
