#include <bits/stdc++.h>
using namespace std;

int main() {
	int r, c;
	string s;
	cin >> s;
	c = s[0] - 'a' + 1;
	r = s[1] - '0';

	if (r == 1 && c == 1 || r == 1 && c == 8 || r == 8 && c == 1 || r == 8 && c == 8)
		cout << 3 << endl;
	else if (r == 1 || r == 8 || c == 1 || c == 8)
		cout << 5 << endl;
	else
		cout << 8 << endl;

	return 0;
}