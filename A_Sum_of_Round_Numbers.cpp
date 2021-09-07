#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,n) for(int i=a;i<=n;i++)
using namespace std;
ll n,m,k,l,t,s;
ll a[1000001];
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        int j=1;
        k=1;
        //memset(a,0,sizeof(a));
        while(n)
        {
            if(n%10)
            {
                a[j]=k*(n%10);
                j++;   
            }
            n/=10;
            k*=10;
        }
        j--;
        cout<<j<<endl;
        for(int i=j;i>=1;i--)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
}