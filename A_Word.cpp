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
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
int32_t main()
{
    
        string s;
        cin>>s;
        int u = 0, l = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i]>= 97 && s[i]<=122){
                l++;
            }
            else if(s[i]>=65 && s[i]<=90){
                u++;
            }
        }
        if(l >= u){
            for(int i = 0; i < s.length(); i++){
                s[i] = tolower(s[i]);
                cout<<s[i];
            }
        }
        if(l < u){
            for(int i = 0; i < s.length(); i++){
                s[i] = toupper(s[i]);
                cout<<s[i];
            }
        }
        cout<<endl;
    

    return 0;
}