#include<bits/stdc++.h>
using namespace std;
main()
{
    string s;
    getline(cin,s);
    int i,c=0;
    for(i=0;i<s.size();i++){
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
            if(c==0) {s[i]=toupper(s[i]);c++;}
            else {s[i]=tolower(s[i]); c--;}
        }
        cout<<s[i];
    }
    cout<<'\0'<<'\n';
}
