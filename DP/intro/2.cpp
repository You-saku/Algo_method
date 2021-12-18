#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int>A(n);
	vector<int>ans(n);

	for(int i = 0; i < n; i++){
		cin >> A[i];
	}
	
	if(n == 2){
		cout << A[1] << endl;
		return 0;
	}else{
		ans[0] = 0;
		ans[1] = A[1];
		for(int i = 2; i < n; i++){
			if(ans[i-1]+A[i] > ans[i-2]+2*A[i]){
				ans[i] = ans[i-2]+2*A[i];
			}else{
				ans[i] = ans[i-1]+A[i];
			}
		}
	}
	cout << ans[n-1] << endl;
	return 0;
}