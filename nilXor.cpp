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

int t[55][2];
int n, d;

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
}

int helper(int num, int k){
    if(num < 0){ // base case
        return 1;
    }
    
    //memoized
    if(t[num][k] != -1){
        return t[num][k];
    }
    
    int res = 0;
    if(d >> num & 1){
        res += helper(num - 1, k);
    }
    else{
        if(n >> num & 1){
            res += helper(num - 1, k);
            res += helper(num - 1, 0);
        }
        else{
            res += helper(num - 1, k);
            if(k == 0){
                res += helper(num - 1, k);  
            } 
        }
    }
    
    //returning the final answer
    return t[num][k] = res;
}
 
int32_t main()
{
    c_p_c();
    
    w(x){
        memset(t, -1, sizeof t);
        cin>>n>>d;
        int ans = helper(39, 1);
        cout<<ans - 1<<endl;
    }    

    return 0;
}
