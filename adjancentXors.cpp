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
    int num, t, dummy[200001], dp[200001][2];
    cin>>num>>t;
    for(int i = 1; i <= num; i++){
        cin>>dummy[i];
    }
        
    for(int i = 2; i <= num; i++) {
        int a, b;
        a = max(dp[i-1][0] + (dummy[i-1] ^ dummy[i]), dp[i-1][1] +  ((dummy[i-1] + t) ^ dummy[i]));
        b = max(dp[i-1][0] + (dummy[i-1] ^ (dummy[i]+t)), dp[i-1][1] + ((dummy[i-1] + t) ^ (dummy[i] + t)));
        dp[i][0] = a;
        dp[i][1] = b;
    }
    cout<<max(dp[num][0], dp[num][1])<< endl;
}
 
int32_t main(){
    c_p_c();
    int t;
    cin>>t;
    while(t--){
        solution();    
    }    

    return 0;
}