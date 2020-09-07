#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int x;
	cin >> x;
	vector<int> dp(30001);
	for(int i=2; i<=x; ++i){
		dp[i] = dp[i - 1] + 1;
		if (!(i % 2)) dp[i] = min(dp[i], dp[i / 2] + 1);
		if (!(i % 3)) dp[i] = min(dp[i], dp[i / 3] + 1);
		if (!(i % 5)) dp[i] = min(dp[i], dp[i / 5] + 1);
	}
	cout << dp[x] << '\n';
	return 0;
}