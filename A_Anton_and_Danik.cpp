// #include<bits/stdc++.h>
// using namespace std;
 
// #define ff              first
// #define ss              second
// #define int             long long
// #define pb              push_back
// #define mp              make_pair
// #define pii             pair<int,int>
// #define vi              vector<int>
// #define mii             map<int,int>
// #define pqb             priority_queue<int>
// #define pqs             priority_queue<int,vi,greater<int> >
// #define setbits(x)      __builtin_popcountll(x)
// #define zrobits(x)      __builtin_ctzll(x)
// #define mod             1000000007
// #define inf             1e18
// #define ps(x,y)         fixed<<setprecision(y)<<x
// #define mk(arr,n,type)  type *arr=new type[n];
// #define w(x)            int x; cin>>x; while(x--)
// mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
// int32_t main()
// {
//     int n;
//     cin >> n;

//     int anton = 0;
//     int danik = 0;

//     for(int i = 0; i < n; i++){
//         char ch;
//         cin >> ch;
//         if(ch == 'A'){
//             anton++;
//         }
//         else{
//             danik++;
//         }
//     }

//     if(anton > danik){
//         cout<<"Anton";
//     }
//     else if(danik > anton){
//         cout<<"Danik";
//     }
//     else{
//         cout<<"Friendship";
//     }

//     return 0;
//}

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
    cin >> n;

    int anton = 0;
    int danik = 0;

    for(int i = 0; i < n; i++){
        char ch;
        cin >> ch;
        if(ch == 'A'){
            anton++;
        }
        else{
            danik++;
        }
    }

    if(anton > danik){
        cout<<"Anton";
    }
    else if(danik > anton){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }

}
 
int32_t main()
{
    c_p_c();
    solution();
    
    return 0;
}