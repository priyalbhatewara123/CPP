#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	cin.get();

	char cur_str[100];
	char lar_str[100];


	int lar_l = 0;
	int l = 0;
	cin.get();

	for (int i = 0; i < n; i++) {

		cin.getline(cur_str, 100);
		l = strlen(cur_str);
		if (l > lar_l) {

			lar_l = l;
			strcpy(lar_str, cur_str);
		}
	}

	cout << lar_str << endl;
	cout << lar_l;

	return 0;
}