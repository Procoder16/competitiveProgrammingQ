#include<bits/stdc++.h>
using namespace std;
 
#define ff              first
#define ss              second
//#define int             long long
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
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
int32_t main()
{
    w(t){
      int n;
      cin>>n;
      vector<int> arr;
      for(int i = 0; i < n; i++){
        int k;
        cin>>k;
         arr.push_back(k);
      }

      sort(arr.begin(), arr.end());
      int mindif = INT_MAX;
      for(int i = 0; i < n-1; i++){
          int diff = arr[i+1] - arr[i];
          mindif = min(mindif, diff);
      }
      cout<<mindif<<endl;
    }

    return 0;
}