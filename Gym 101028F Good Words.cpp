
#include<stdio.h>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    long long int t,i,j;
    char a[1010],b[10],*r,st1[10],st2[10],st3[10],st4[10],*s,*p,*q,*d;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s",&a);
        scanf("%s",&b);
        st1[0]=b[0],st1[1]=b[1],st1[2]=b[2],st1[3]='\0';

        st2[0]=b[1],st2[1]=b[2],st2[2]=b[3],st2[3]='\0';

        st3[0]=b[0],st3[1]=b[2],st3[2]=b[3],st3[3]='\0';

        st4[0]=b[0],st4[1]=b[1],st4[2]=b[3],st4[3]='\0';
        r=strstr(a,b);
        s=strstr(a,st1);
        p=strstr(a,st2);
        q=strstr(a,st3);
        d=strstr(a,st4);
        if(strstr(a,b))
        {
            printf("good\n");
        }
        else if(strstr(a,st1))
        {
            printf("almost good\n");
        }

        else if(strstr(a,st2))
        {
            printf("almost good\n");
        }
        else if(strstr(a,st3))
        {
            printf("almost good\n");
        }
        else if(strstr(a,st4))
        {
            printf("almost good\n");
        }
        else
        {
            printf("none\n");
        }


    }
    return 0;
}

