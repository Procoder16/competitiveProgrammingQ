#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

char s[200001];
int main() {
 int t;
 scanf("%d",&t);
 while(t--){
  int n,a,b;
  scanf("%d%d%d",&n,&a,&b);
  ++n;
  vector<int> v(n);
  ll sum=0;
  for(int i=1;i<n;++i){
   scanf("%d",&v[i]);
   sum+=v[i];
  }
  ll res=1e18;
  for(int i=0;i<n;++i){
   ll cur = (a+b)*(ll)v[i];
   sum-=v[i];
   cur+=(sum-(n-i-1)*(ll)v[i]) * b;
   res=min(res,cur);
  }
  printf("%lld\n",res);
 }
 return 0;
}