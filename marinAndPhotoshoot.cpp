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
    int n;
    cin>>n;
    string str;
    cin>>str;

    int i = 0;
    
    int oneMore = 0;
    int twoMore = 0;

    while(i < n - 1){
        if(str[i] == '0' && str[i + 1] == '0'){
            twoMore++;
            i++;
        }
        else if(str[i] == '0' & str[i+1] == '1' && str[i+2] && str[i+2] == '0'){
            oneMore++;
            i+=2;
        }
        else{
            i++;
        }
    }
    int total = 2*twoMore + oneMore;
    cout<<total<<endl;
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