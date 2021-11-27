#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,v;
	cin >> n >> v;
	vector<int>a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		if(a[i]==v){
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
	return 0;
}