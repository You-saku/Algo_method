#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	string t;
	cin >> s >> t;

	int sLength = s.length();
	int tLength = t.length();

	for(int i = 0; i <= sLength-tLength; i++){
		if(s.substr(i, tLength) == t){
			cout << "Yes" << endl;
			return 0;
		}		
	}
	cout << "No" << endl;
	return 0;
}