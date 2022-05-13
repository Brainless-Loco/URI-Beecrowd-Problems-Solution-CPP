#include<bits/stdc++.h>
using namespace std;
int a[5];
main()
{
    int s;
    char c;
    while(scanf("%d %d %d %d",&a[1],&a[2],&a[3],&a[4])==4){
        s=0;
        scanf("\n");
        while(1){
            scanf("%c",&c);
            if(c=='\n')
                break;
            c-=48;
            s+=a[c];
        }
        printf("%d\n",s);
    }
}
