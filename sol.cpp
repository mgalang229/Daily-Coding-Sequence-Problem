#include <bits/stdc++.h>

using namespace std;

void decode() {
	int s, d, n, cnt = 0;
	cin >> s >> d >> n;
	for(int i = s; cnt < n; i += d) {
		cout << i << " ";
		cnt++;
	}
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
