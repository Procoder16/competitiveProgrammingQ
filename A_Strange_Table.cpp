#include <iostream>

using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t --)
    {
        ll n ,m,x;
        scanf("%lld%lld%lld", &n, &m, &x);
       
        ll l = (x-1) / n+1;
        ll r = (x-1) % n;
        
        cout << r*m+l << endl;
    }
    return 0;
}