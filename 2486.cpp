#include<bits/stdc++.h>
using namespace std;
main()
{
    int s,n,a;
    char c[20];
    while(scanf("%d",&n)==1){
        if(n==0)
            break;
        s=0;
        while(n--){
            scanf("%d",&a);
            scanf(" %[^\n]s",c);
            if(0==strcasecmp(c,"suco de laranja"))
                s+=a*120;
            else if(0==strcasecmp(c,"morango fresco"))
                s+=a*85;
            else if(0==strcasecmp(c,"mamao"))
                s+=a*85;
            else if(0==strcasecmp(c,"goiaba vermelha"))
                s+=a*70;
            else if(0==strcasecmp(c,"manga"))
                s+=a*56;
            else if(0==strcasecmp(c,"laranja"))
                s+=a*50;
            else if(0==strcasecmp(c,"brocolis"))
                s+=a*34;
        }
        if(s<=130&&s>=110)
            printf("%d mg\n",s);
        else if(s>130)
            printf("Menos %d mg\n",s-130);
        else
            printf("Mais %d mg\n",110-s);
    }
}
