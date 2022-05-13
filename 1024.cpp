#include<bits/stdc++.h>
using namespace std;
main()
{
    char a[1001];
    int n,i,p;
    while(scanf("%d",&n)==1){
        //scanf("\n");
        while(n--){
        scanf("\n");
        scanf("%[^\n]s",&a);
        p=strlen(a)-1;
        for(i=0;i<strlen(a);i++){
            if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
                    a[i]+=3;
        }
        for(i=0;i<strlen(a)/2;i++){
            swap(a[i],a[p-i]);
        }
        for(i=(p+1)/2;i<strlen(a);i++){
            a[i]--;
        }
        printf("%s\n",a);
        }
    }
}
