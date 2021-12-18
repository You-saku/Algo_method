#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	vector<int>D(m);
	for(int i = 0; i < m ; i++){
		cin >> D[i];
	}
	vector<bool>ans(n+1);
	ans[0] = true;
	for(int i = 1; i <= n; i++){
		for(int j = 0; j < m; j++){
			if(i - D[j] >= 0 && ans[i - D[j]]){
				ans[i] = true;
			}
		}
	}

	if(ans[n]){
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}