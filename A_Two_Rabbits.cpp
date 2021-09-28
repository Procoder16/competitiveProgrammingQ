#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sd(n) scanf("%d", &n)
#define sdd(n, m) scanf("%d%d", &n, &m)
#define sddd(n, m, k) scanf("%d%d%d", &n, &m, &k)
#define sld(n) scanf("%lld", &n)
#define sldd(n, m) scanf("%lld%lld", &n, &m)
#define slddd(n, m, k) scanf("%lld%lld%lld", &n, &m, &k)
#define sf(n) scanf("%lf", &n)
#define sff(n, m) scanf("%lf%lf", &n, &m)
#define sfff(n, m, k) scanf("%lf%lf%lf", &n, &m, &k)
#define pd(n) printf("%d\n", (n))
#define pdd(n, m) printf("%d %d\n", n, m)
#define pld(n) printf("%lld\n", n)
#define pldd(n, m) printf("%lld %lld\n", n, m)
#define rep(i, a, n) for(int i=a; i<=n; i++)
#define per(i, n, a) for(int i=n; i>=a; i--)
 
int T;
ll x,y,a,b;
 
int main()
{
    scanf("%d",&T);
    while(T--)
    {
        sldd(x,y);
        sldd(a,b);
        if(x>y)
        {
            printf("-1\n");
            continue;
        }
        ll m=(y-x)/(a+b);
        if(m*(a+b)==(y-x))
        {
            printf("%lld\n",m);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}