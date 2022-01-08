#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// if we print the results of (n mod i, where 1 <= i <= n) and it can be observed
		// that the (n mod i) which results to 1 are the factors of the (n - 1)-th number
		// for example: n = 13
		// 13 mod 1 = 0
		// 13 mod 2 = 1 <-
		// 13 mod 3 = 1 <-
		// 13 mod 4 = 1 <-
		// 13 mod 5 = 3
		// 13 mod 6 = 1 <-
		// 13 mod 7 = 6
		// 13 mod 8 = 5
		// 13 mod 9 = 4
		// 13 mod 10 = 3
		// 13 mod 11 = 2
		// 13 mod 12 = 1 <-
		// 13 mod 13 = 0
		// the i-th values which produces 1 as the results are {2, 3, 4, 6, 12} or simply the factors of 12
		// note: don't forget to add 1 to the final answer because using 1 chair always works
		n -= 1;
		int ans = 0;
		for (int i = 1; i <= (int) sqrt(n); i++) {
			if (n % i == 0) {
				ans += (n / i == i ? 1 : 2);
			}
		}
		cout << ans << '\n';
	}
	return 0;
}