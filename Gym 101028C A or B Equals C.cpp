
#include<stdio.h>
#include<bits/stdc++.h>
char a[1000],b[1000];
using namespace std;
int main()
{
    long long int t,j,k,n,x[1000],p,s=1,i,f=0;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        f=0;
        s=1;
        p=0;
        scanf("%lld",&n);
        scanf("%s%s",&a,&b);

        for(j=0; j<n; j++)
        {
            b[j]=b[j]-'0';
            a[j]=a[j]-'0';
            if(b[j]==0)
            {
                if(a[j]==1)
                {
                    printf("IMPOSSIBLE\n");
                    f=1;
                    break;
                }
                x[p]=1;
            }
            else if(b[j]==1)
            {
                if(a[j]==1)
                {
                    x[p]=2;
                }
                else if(a[j]==0)
                {
                    x[p]=1;
                }
            }

            p++;

        }
        if(f==0)
        {
            for(j=0; j<n; j++)
            {
                s*=x[j];
                s=s%1000000007;
            }
            printf("%lld\n",s);
        }
    }
    return 0;
}


