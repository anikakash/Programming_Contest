#include<bits/stdc++.h>
using namespace std;
//half solve it cant not handel 9*10^9 mod;
int main()
{
    int i, t, n, k, r, b;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %d %d", &n, &k, &r, &b);
        int l = r-k;
        int fa=1;;
        for(int j=1; j<=k; j++)
        {
            fa=((fa%1000000007)*(j%1000000007))%1000000007;
        }
        long long int p1, p2, ab, y=1, x=1;
        //ab = k%1000000007;
        for(int j=1; j<=l; j++)
        {
            y=k*y;
            y = y%1000000007;
        }

        for(int j=1; j<=b; j++)
        {
            x=k*x;
            x = x%1000000007;
        }
        long long int ans;
        ans = ((fa%1000000007)*(y%1000000007)*(x%1000000007))%1000000007;
        printf("Case #%d: %lld\n", i,ans);
        ans=1;
    }
    return 0;
}
