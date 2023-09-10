
#include<stdio.h>
#include<string.h>
int main()
{
    char a[30],b[30],c[30];
    int i,j,f=0,d=0;
    scanf("%s",&a);
    scanf("%s",&b);
    scanf("%s",&c);
    for(i=0; i<10; i++)
    {
        if(a[i]=='=')
        {
            f=1;
            for(j=i+1; j<10; j++)
            {
                if(a[j]=='H')
                {
                    printf("H\n");
                    d=1;
                    break;
                }
                else if(a[j]=='T')
                {
                    printf("T\n");
                    d=1;
                    break;
                }
                else if(a[j]=='P')
                {
                    printf("P\n");
                    d=1;
                    break;
                }
            }

        }

    }
    if(f==0)
    {
        for(i=0; i<10; i++)
        {
            if(b[i]=='=')
            {
                f=1;
                for(j=i+1; j<10; j++)
                {
                    if(b[j]=='H')
                    {
                        printf("H\n");
                        d=1;
                        break;
                    }
                    else if(b[j]=='T')
                    {
                        printf("T\n");
                        d=1;
                        break;
                    }
                    else if(b[j]=='P')
                    {
                        printf("P\n");
                        d=1;
                        break;
                    }
                }

            }

        }
    }


    if(f==0)
    {
        for(i=0; i<10; i++)
        {
            if(c[i]=='=')
            {
                f=1;
                for(j=i+1; j<10; j++)
                {
                    if(c[j]=='H')
                    {
                        printf("H\n");
                        d=1;
                        break;
                    }
                    else if(c[j]=='T')
                    {
                        printf("T\n");
                        d=1;
                        break;
                    }
                    else if(c[j]=='P')
                    {
                        printf("P\n");
                        d=1;
                        break;
                    }
                }

            }

        }
    }
    if(d==0)
    {
       printf("You shall pass!!!\n");
    }
return 0;
}
