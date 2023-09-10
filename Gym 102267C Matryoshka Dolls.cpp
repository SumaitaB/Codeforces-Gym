
#include<stdio.h>
#include<string.h>
int main()
{
    long long int s,x,i,p,j,c=0;
    scanf("%lld%lld",&s,&x);
    p=s/x;
    while(1)
    {
        if(s>=p){c++;}
        if(p<=0){break;}
        s=p;
        p=s/x;
    }
    printf("%lld\n",c);
    return 0;
}
