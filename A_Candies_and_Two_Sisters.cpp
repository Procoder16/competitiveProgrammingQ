#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(auto i=(a);i<=(b);++i)
#define dep(i,a,b) for(auto i=(a);i>=(b);--i)
#define pb push_back
typedef long long ll;
const int maxn=(int)1e6+100;
const int mod=(int)1e9+7;
void solve(){
    ll n;scanf("%lld",&n);
    printf("%lld\n",n/2-(n%2==0));
}
int main(){
    int T;cin>>T;
    while(T--) solve();
}