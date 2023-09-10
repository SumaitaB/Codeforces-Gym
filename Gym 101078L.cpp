#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n,a[100000+10],i,j;
    double x=0;
    string str;
    cin>>str;
    n=str.length();
    double p=0;
    for(i=0; i<n; i++)
    {
        if(str[i]=='1')
        {
            for(j=n-1; j>i; j--)
            {
                if(str[j]=='0')
                {
                    //cout<<"i " <<i<<" "<<j<<endl;
                    swap(str[i],str[j]);
                    x=abs((j+1)-(i+1));
                    x=sqrt(x);
                    p+=x;
                    break;
                }

            }
            //if(f==1){f=0;break;}

        }
    }
    //cout<<x<<endl;
    //x=sqrt(x);
    cout<<fixed<<setprecision(12)<<p<<endl;

    return 0;
}
