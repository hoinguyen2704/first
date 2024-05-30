#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n;
    cin >> n;

    int dp[101] = {0};
    dp[0] = 1;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            dp[i] = (dp[i] + dp[i - j]) % MOD;
        }
    }

    cout << dp[n] << endl;
    return 0;
}
