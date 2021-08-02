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
    w(t){
        int n;
        cin >> n;

        vi arr;
        for(int i = 0; i < n; i++){
            int k;
            cin>>k;
            arr.push_back(k);
        }

        int pos;
        cin>>pos;

        int ele = arr[pos - 1];

        sort(arr.begin(), arr.end());

        for(int i = 0; i < n; i++){
            if(arr[i] == ele){
                cout<<i+1<<endl;
                break;
            }
        }
    }

    return 0;
}