#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

#define int long long
#define vi vector<int>
#define v2i vector<vi>
#define ii pair<int, int>
#define F first
#define S second

int tc = 1;
const int INF = 24 * 60 + 100;

int32_t main(){

    cin >> tc;
    while (tc--){
        int n, H, M;
        cin >> n >> H >> M;

        vector<ii> a(n);
        for (auto &x : a)
            cin >> x.F >> x.S;

        sort(a.begin(), a.end());
        a.push_back({a[0].F + 24, a[0].S});

        int ans = INF;

        for (int i = 0; i < a.size(); i++){
            if (H < a[i].F || (a[i].F == H && (M <= a[i].S))){
                ans = min(ans, -(H * 60 + M - a[i].F * 60 - a[i].S));
            }
        }

        cout << ans / 60 << ' ' << ans % 60 << '\n';
    }

    return 0;
}
