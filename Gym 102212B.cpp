
#include<stdio.h>
#include<string.h>
int main()
{
    long long int i,j,a,b,al=0,bob=0;
    scanf("%lld%lld",&a,&b);
    al=a;
    bob=b;
     while(1)
        {
            if(al==bob)break;
            else if(al<bob)
            {
              al+=a;
            }
            else if(al>bob)
            {
                bob+=b;
            }

        }
        printf("%lld\n",al);
        return 0;
    }

