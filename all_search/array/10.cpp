#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<int,int>countMap;

	for(int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		countMap[tmp]++;
	}

	int maxCount = 0;
	int ans;
	for(auto x: countMap){
		if(maxCount < x.second){
			ans = x.first;
			maxCount = x.second;
		}
	}

	cout << ans << endl;

	return 0;
}