#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string s;
	cin >> n;
	cin >> s;

	int ans = 0;
	for(int i = 0; i < n-1; i++){
		for(int j = i+1; j < n; j++){
			if(s[i] == s[j]) ans++;
		}
	}
	cout << ans << endl;
	return 0;
}