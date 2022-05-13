#include<stdio.h>
main()
{
    int n,m,sa,sb;
    while(scanf("%d",&n)==1){
        int a,b,c,x,y,z;
        while(n--){
            scanf("%d",&m);
            scanf("%d %d %d",&a,&b,&c);
            scanf("%d %d %d",&x,&y,&z);
            sa=(a+b)/2;
            sb=(x+y)/2;
            if(c%2==0)
                sa+=m;
            if(z%2==0)
                sb+=m;
            if(sa==sb)
                printf("Empate\n");
            else if(sa>sb)
                printf("Dabriel\n");
            else
                printf("Guarte\n");
        }
    }
}
