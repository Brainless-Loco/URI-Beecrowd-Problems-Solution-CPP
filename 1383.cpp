#include<stdio.h>
main()
{
    int a[9][9],i,j,s,c,n,k;
    s=405;
    while(scanf("%d",&n)==1){
        k=n;
        while(n--){
            c=0;
            for(i=0;i<9;i++){
                for(j=0;j<9;j++){
                    scanf("%d",&a[i][j]);
                    c+=a[i][j];
                }
            }
        if(c==s){
        }
        else
            printf("Instancia %d\nNAO\n\n",k-n);
        }
    }
}
