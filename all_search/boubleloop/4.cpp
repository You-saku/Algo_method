#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	int sLength = s.length();
	set<int>alphabet;
	for(int i = 0; i < sLength; i++){
		char tmp = s[i];
		alphabet.insert(tmp);
	}

	cout << alphabet.size() << endl;

	return 0;
}