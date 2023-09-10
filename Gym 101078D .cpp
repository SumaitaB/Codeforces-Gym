#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t,n,x,ans;

    cin>>t;

    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            ans = n/2 + (n+1)/3;

        }
        else if(n%2==1)
        {
            ans = (n+1)/2 + (n+3)/3 ;
        }
        cout<<ans<<endl;
    }

    return 0;
}

