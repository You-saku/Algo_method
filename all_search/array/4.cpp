#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,v;
	cin >> n >> v;
	vector<int>a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}

    int index = -1;
	for(int i = 0; i < n; i++){
		if(a[i]==v) index = i;
	}

	cout << index << endl;

	return 0;
}