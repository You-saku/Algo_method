#include <bits/stdc++.h>
using namespace std;

int main() {
	int l,r;
	cin >> l >> r;
	int ans = 0;
	for(int i = l; i <= r-1; i++){
		string num1 = to_string(i);
		int num1Length = num1.length();
		for(int j = i+1; j <= r; j++){
			string num2 = to_string(j);
			int num2Length = num2.length();
			if(num1.substr(num1Length-1, 1) == num2.substr(num2Length-1, 1)) ans++;
		}
	}
	cout << ans << endl;
	return 0;
}