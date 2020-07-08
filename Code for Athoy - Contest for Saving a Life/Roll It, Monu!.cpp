#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    scanf("%d %d",&a,&b);
    if((a==1 && b ==3) ||(a==3 && b==1))
    {
        printf("2\n");
    }
    else if( (a==2 && b==4)|| (a==4 && b==2))
    {
        printf("2\n");
    }
    else if((a==5 && b == 6) || (a==6 && b==5))
    {
        printf("2\n");
    }
    else if(a==b){
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }
    return 0;
}

