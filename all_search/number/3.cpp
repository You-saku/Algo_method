#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int limit = (int)sqrt(n);
	
	if(n == 1 || n == 0){
		cout << "No" << endl;
		return 0;
	}

	for(int i = 2; i <= limit; i++){
		if(n%i == 0){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}