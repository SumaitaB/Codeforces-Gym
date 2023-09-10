#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll a[1000000+5],b[1000000+5];
ll apos[1000000+5],bpos[1000000+5];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll i,n,t,j,k;


    cin>>t;

    while(t--)
    {
        ll first,last,x;

        cin>>n;

        for (i=1; i<=n; i++)
        {
            cin>>x;
            a[i]=x;
            apos[x]=i;
        }
        for (i=1; i<=n; i++)
        {
            cin>>x;
            b[i]=x;
            bpos[x]=i;
        }


        for (last=1; last<=n; last++)
        {
            first=last;

            for (i=first; i<=last; i++)
            {
                x=a[i];
                if (bpos[x]>last)
                {
                    last=bpos[x];
                }

                x=b[i];
                if (apos[x]>last)
                {
                    last=apos[x];
                }
            }

            if (first>1)
            {
                cout<<" ";
            }

            cout<<first<<"-"<<last;
        }

        cout << endl;
    }
    return 0;

}
