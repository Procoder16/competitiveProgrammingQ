#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<xz
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

void solution(){
    mii mp;
    
    int temp = 0;
    cin >> temp;
      
      while(temp--){
          int i;
          cin >> i;
          mp[i]++;
      }
      
      pqb q;
      
      for(int i = 0; i < mp.size(); i++) q.push(mp[i]);
      
      
      if(mp.size() == 1) cout<<"YES"<<endl;
      else{
          int temp1 = q.top();
          q.pop();
          int temp2 = q.top();
          if(temp1 == temp2) cout<<"NO"<<endl;
          else cout<<"YES"<<endl;
      }
}
 
int32_t main()
{
    c_p_c();
    int t;
    cin>>t;
    while(t--){
        solution();    
    }    

    return 0;
}