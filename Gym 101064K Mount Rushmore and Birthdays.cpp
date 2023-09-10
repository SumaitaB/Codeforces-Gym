
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t,n,i,ans;
    cin>>n;
    double x,y=0;
    x=n;
    x=x/x*1.000;
    //cout<<x<<endl;
    for(i=1;; i++)
    {
        x=x*((n-y)*1.00/n);
        y++;
        //cout<<x<<endl;
        if(x<=0.5)
        {
            ans=i;
            break;
        }

    }
    cout<<ans<<endl;


    return 0;
}
