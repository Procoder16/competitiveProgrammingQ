#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int t;
  scanf("%d",&t);
  while(t--){
    int n;
    scanf("%d",&n);
    int v[2][25];
    for(int i=0;i<2;++i)
      for(int j=0;j<n;++j)
        scanf("%d",&v[i][j]);
    ll res=0;
    for(int i=1;i<n;++i){
      ll a=abs(v[0][i]-v[0][i-1]) + abs(v[1][i]-v[1][i-1]);
      ll b=abs(v[1][i]-v[0][i-1]) + abs(v[0][i]-v[1][i-1]);
      if(a>b)
        swap(v[0][i],v[1][i]);
      res+=min(a,b);
    }
    printf("%lld\n",res);
  }
  return 0;
}