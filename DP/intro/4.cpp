#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int>tile(n+1);
	tile[0] = 1;
	tile[1] = 1;
	tile[2] = 2;
	int index = 3;
	while(index <= n){
		tile[index] = tile[index-1]+tile[index-2]+tile[index-3];
		index++;
	}
	cout << tile[n] << endl;
	return 0;
}