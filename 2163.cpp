#include<stdio.h>
main()
{
    int x,y,i,c,j,d;
    while(scanf("%d %d",&x,&y)==2){
        int a[x][y],b[x],e[y];
        d=0;
        for(i=0;i<x;i++){
            for(j=0;j<y;j++){
                scanf("%d",&a[i][j]);
                if(a[i][j]==42&&i<x-1&&j<y-1){
                    b[d]=i;
                    e[d]=j;
                    d++;
                }
            }
        }
        c=0;
        for(i=0;i<d;i++){
            if(a[b[i]-1][e[i]]==7&&a[b[i]+1][e[i]]==7&&a[b[i]][e[i]-1]==7&&a[b[i]][e[i]+1]==7&&a[b[i]-1][e[i]-1]==7&&a[b[i]+1][e[i]+1]==7&&a[b[i]+1][e[i]-1]==7&&a[b[i]-1][e[i]+1]==7){
                printf("%d %d\n",b[i]+1,e[i]+1);
                c++;
                break;
                }
            }
        if(i==d)
            printf("0 0\n");
    }
}
