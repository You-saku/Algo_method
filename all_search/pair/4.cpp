#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<string>s(n);
	for(int i = 0; i < n; i++){
		cin >> s[i];
	}

	int ans = 0;
	for(int i = 0; i < n-1; i++){
		string one = s[i];
		for(int j = i+1; j < n; j++){
			string two = s[j];
			if(!one.compare(two)){
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
	return 0;
}