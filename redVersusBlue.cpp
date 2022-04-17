#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int t;
  scanf("%d",&t);
  while(t--){
    int n,r,b;
    scanf("%d%d%d",&n,&r,&b);
    int k=r/(b+1);
    int add=r%(b+1);
    while(r){
      int need=k+(add>0);
      add=max(0,add-1);
      r-=need;
      while(need--)
        printf("R");
      if(b>0){
        printf("B");
        --b;
      }
    }
    puts("");
  }
  return 0;
}