#include<bits/stdc++.h>
using namespace std;
main()
{
    int n,c,i,a[26],j;
    char s[201];
    while(scanf("%d",&n)==1){
            scanf("\n");
        while(n--){
            scanf("%[^\n]s",s);
            j=0;
            while(j <= 25)
            {
                 a[j] = 0;
                 j++;
                }
            for(i=0;i<strlen(s);i++){
                if(s[i]<123&&s[i]>96)
                    s[i]-=97;
                else if(s[i]<91&&s[i]>64)
                    s[i]-=65;
                c=s[i];
                a[c]++;
            }
            c=0;
            for(i=0;i<26;i++){
                if(a[i]>=c)
                    c=a[i];
            }
            for(i=0;i<26;i++){
                if(a[i]==c){
                    printf("%c",i+97);
                }
            }
            printf("\n");
            scanf("\n");
        }
    }
}
