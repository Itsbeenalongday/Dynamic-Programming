#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n, k;
	cin >> n >> k;
	vector<int> coins(n, 0);// nÁ¾·ù È­Æó
	vector<int> dp(10001, 10001);// dp
	for (int i = 0; i < n; ++i) {
		cin >> coins[i];
		dp[coins[i]] = 1;
	}
	for (int i = 0; i < n; ++i) {
		for (int j = coins[i]; j <= k; ++j) {
			dp[j - coins[i]] != 10001 ? dp[j] = dp[j] : dp[j] = min(dp[j - coins[i]] + 1, dp[j]);
		}
	}
	dp[k] == 10001 ? cout << -1 << '\n': cout << dp[k] << '\n';
	return 0;
}