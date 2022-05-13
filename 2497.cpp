#include<stdio.h>
main()
{
    int n,i;
    i=1;
    while(scanf("%d",&n)==1){
        if(n==-1)
            break;
        else{
            printf("Experiment %d: %d full cycle(s)\n",i,n/2);
            i++;
        }
    }
}
