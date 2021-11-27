#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int>numbers(n);
	
	for(int i = 0; i < n; i++){
		cin >> numbers[i];
	}

	int ans = 0;

	for(int i = 0; i < n; i++){
		int limit = (int)sqrt(numbers[i]);
		bool flag = true;
		
		if(numbers[i] == 1) continue;	
		for(int j = 2; j <= limit; j++){
			if(numbers[i]%j == 0){
				flag = false;
				break;
			}
		}
		if(flag) ans++;
	}

	cout << ans << endl;

	return 0;
}