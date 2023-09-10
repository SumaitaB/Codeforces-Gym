
#include<stdio.h>
#include<bits/stdc++.h>
char b[30],a[1000][1000];
using namespace std;
int main()
{
    long long int I,C,R,i,j,k,r1,r2,c1,c2,t,p;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {

        scanf("%lld%lld%lld",&R,&C,&I);
            for(j=1; j<=R; j++)
        {
            for(k=1; k<=C; k++)
            {
                a[j][k]='.';
            }

        }
        for(p=1; p<=I; p++)
        {
            scanf("%lld%lld%lld%lld",&r1,&c1,&r2,&c2);
            getchar();
            scanf("%c",&b[0]);

            for(j=r1; j<=r2; j++)
            {
                for(k=c1; k<=c2; k++)
                {
                    a[j][k]=b[0];
                }

            }
        }
        for(j=1; j<=R; j++)
        {
            for(k=1; k<=C; k++)
            {
                printf("%c",a[j][k]);
            }
            printf("\n");
        }
    }
    return 0;
}

