
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
ll n,r[5]={0};
cin>>n;
ll i=0;
while(n)
{
    r[i]=n%10;
    n=n/10;
    i++;
}
cout<<r[1]<<" "<<r[0]<<endl;
    return 0;
}
