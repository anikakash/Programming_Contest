#include<bits/stdc++.h>
using namespace std;
//decimal to binary convert.
int main()
{
    int i, n, t;
    cin>>t;
    while(t--){
        cin>>n;
        printf("1");
        for(i=n; i>0; i--){
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
