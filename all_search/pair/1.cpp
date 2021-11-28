#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
	vector<int>a(n);

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int ans = 0;
	
	for(int i = 0; i < n; i++){
		int sum = a[i];
		for(int j = i+1; j < n; j++){
			sum+=a[j];
			if(sum <= k){
				ans++;
			}
			sum-=a[j];
		}
	}
	cout << ans << endl;
	return 0;
}