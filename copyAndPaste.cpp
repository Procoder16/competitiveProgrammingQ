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
    int num, t, count = 0, ans = 0, temp = 0;
    char str[200002];
    
    cin>>num>>t>>(str+1);
    
    for(int i = 1; i <= num; i++){
        if(str[i] == '1'){
            count++;  
        } 
    }
        
    if(count == 0){
        cout<<num * t<<endl;
        return;
    }
    
    if(count * t % 2 ==1) {
        cout << 0 << endl;
        return;
    }
    
    if(t % 2 == 0){
        for(int i = 1; i <= num; i++) {
            if(str[i] == '1'){
              break;  
            } 
            ans++;
        }
        for(int i = num; i >= 1; i--) {
            if(str[i] == '1'){
                break;  
            } 
            ans++;
        }
        cout<<ans + 1<<endl;
        return;
    }
    
    for(int i = 1; i <= num; i++) {
        if(str[i] == '1'){
          temp++;  
        } 
        if(temp == count/2){
          ans++;  
        } 
    }
    cout<<ans<<endl;
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


