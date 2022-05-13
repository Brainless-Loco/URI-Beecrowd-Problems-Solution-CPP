#include<stdio.h>
main()
{
    int a,b,c,d,e,f,s;
    while(scanf("%d %d %d",&a,&b,&c)==3){
        scanf("%d %d %d",&d,&e,&f);
        s=0;
        if(d>a)
            s+=d-a;
        if(e>b)
            s+=e-b;
        if(f>c)
            s+=f-c;
        printf("%d\n",s);
    }
}
