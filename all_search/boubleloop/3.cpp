#include <bits/stdc++.h>
using namespace std;

int main() {
	int l,r;
	cin >> l >> r;
	int ans = 0;

	for(int i = l; i <= r; i++){
		string tmp =  to_string(i);
		int tmpLength = tmp.length();
		if(tmpLength == 1){
			ans++;
			continue;
		}

		int range = tmpLength/2;
		bool flag = true;

		for(int j = 0; j < range; j++){
			if(!(tmp[j] == tmp[tmpLength-1-j])){
				flag = false;
				break;
			}
		}
		if(flag) ans++;
	}
	cout << ans << endl;
	return 0;
}