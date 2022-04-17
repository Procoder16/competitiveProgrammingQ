#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

char s[200001];
int main() {
  int t;
  scanf("%d",&t);
  while(t--){
    int n, k;
    scanf("%d%d",&n,&k);
    int O=k;
    scanf("%s",s);
    string S=s;
    vector<int> res(n);
    int o=0;
    for(int i=0;i<n && k>0;++i){
      s[i] ^= o;
      if(k%2!=s[i]-'0' || i==n-1)
        continue;
      ++res[i];
      --k;
      o^=1;
    }
    res.back() += k;
    for(int i=0;i<n;++i)
      if((O-res[i])%2)
        S[i]^=1;
    puts(S.c_str());
    for(auto &x:res)
      printf("%d ",x);
    puts("");
  }
  return 0;
}