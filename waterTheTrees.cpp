#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int t;
  scanf("%d",&t);
  while(t--){
    int n;
    scanf("%d",&n);
    int mx=0;
    vector<int> v(n);
    for(auto &x:v){
      scanf("%d",&x);
      mx=max(mx,x);
    }
    ll res=1e18;
    for(int h=mx;h<=mx+3;++h){
      ll two=0, one=0;
      for(auto &x:v){
        two += (h-x)/2;
        one += (h-x)%2;
      }
      ll all=one+two*2;
      ll days=all/3*2;
      if(all%3==1)
        ++days;
      if(all%3==2)
        days+=2;
      res=min(res,max(one*2-1, days));
    }
    printf("%lld\n",res);
  }
  return 0;
}