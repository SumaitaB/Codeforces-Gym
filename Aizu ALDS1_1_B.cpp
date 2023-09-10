
#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,d,x,i,j,temp,r,gcd;

        scanf("%lld%lld",&n,&d);
        if(n<d)
        {
            temp=n;
            n=d;
            d=temp;
        }
        r=n%d;
        while(r!=0)
        {
            n=d;
            d=r;
            r=n%d;
        }
        printf("%lld\n",d);

return 0;
}




