#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, ln;
    char s1[1001], s2[1001];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d",&ln);
        scanf("%s",&s1);
        scanf("%s",&s2);
        for(int j=0; j<ln; j++)
        {
            s1[j]= tolower(s1[j]);
            s2[j]= tolower(s2[j]);
        }
        if(strcmp(s1,s2)==0) printf("Case %d: vai problem solve hoy na\n",i);
        else printf("Case %d: table e boisha thak solve hobe\n",i);
    }
    return 0;
}
