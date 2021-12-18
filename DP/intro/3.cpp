#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int>stair(n+1);

	if(n == 1){
		cout << 1 << endl;
		return 0;
	}else{
		stair[1] = 1;
		stair[2] = 2;
		for(int i = 3; i <= n; i++){
			stair[i] = stair[i-1]+stair[i-2];
		}
	}
	cout << stair[n] << endl;
	return 0;
}