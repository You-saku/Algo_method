#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	char c;
	cin >> s;
	cin >> c;

	int stringLength = s.length()-1;
	int range = s.length()/2;

	for(int i = 0; i < range; i++){
		if(!(s[i] == s[stringLength-i])){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;
}