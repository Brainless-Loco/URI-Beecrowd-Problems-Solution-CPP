#include<stdio.h>
main()
{
    int t,i;
    while(scanf("%d",&t)==1){
        char n[100],o='%';
        double a[t],b[t],c[t],d[t],e[t],f[t],x,y,z,s,u,v;
        x=0;
        y=0;
        z=0;
        s=0;
        u=0;
        v=0;
        for(i=0;i<t;i++){
            scanf("\n");
            scanf("%s",&n);
            scanf("%lf %lf %lf",&a[i],&b[i],&c[i]);
            scanf("%lf %lf %lf",&d[i],&e[i],&f[i]);
            x+=a[i];
            y+=b[i];
            z+=c[i];
            s+=d[i];
            u+=e[i];
            v+=f[i];
        }
        printf("Pontos de Saque: %.2lf %c.\n",s*100/x,o);
        printf("Pontos de Bloqueio: %.2lf %c.\n",u*100/y,o);
        printf("Pontos de Ataque: %.2lf %c.\n",v*100/z,o);
    }
}
