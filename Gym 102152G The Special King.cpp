
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int t,i,a,b,x,y,count;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d%d",&a,&b,&x,&y);
        count=abs(a-x)+abs(b-y);
        printf("%d\n",count);
    }
    return 0;
}

