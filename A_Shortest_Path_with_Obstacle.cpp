#include <bits/stdc++.h>

#define long long long
#define Integer_MAX_VALUE 0x7fffffff
#define Integer_MIN_VALUE 0x80000000
#define LONG_MAX_VALUE 0x7fffffffffffffffL
#define LONG_MIN_VALUE 0x8000000000000000L

using namespace std;

struct Solution
{
    void run()
    {
        int x[3], y[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> x[i] >> y[i];
        }

        int ans = abs(x[0] - x[1]) + abs(y[0] - y[1]);
        if (x[0] == x[1] && x[0] == x[2] && min(y[0], y[1]) < y[2] && y[2] < max(y[0], y[1]))
        {
            ans += 2;
        }
        if (y[0] == y[1] && y[0] == y[2] && min(x[0], x[1]) < x[2] && x[2] < max(x[0], x[1]))
        {
            ans += 2;
        }
        cout << ans << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);

    Solution solution = Solution();

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solution.run();
    }
    return 0;
}