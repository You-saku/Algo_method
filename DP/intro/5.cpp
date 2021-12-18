#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	vector<int>A(n);
	vector<int>ans(n,0);
	for(int i = 0; i < n; i++){
		cin >> A[i];
	}

	ans[0] = 0;
	ans[1] = A[1];

	for(int i = 2; i < n; i++){
		int minimum = ans[i-1]+A[i];

		int index = 2;
		while(index <= m){
			if(i-index < 0){
				break;
			} else {
				int tmp = ans[i-index]+A[i]*index;
				minimum = min(minimum, tmp);
				index++;	
			}
		}
		ans[i] = minimum;
	}

	cout << ans[n-1] << endl;
	return 0;
}