#include<bits/stdc++.h>
using namespace std;

void staircase_print(int a[10][10], int n, int m, int key) {
	int row = 0;
	int col = m - 1;
	while (row<n and col >= 0) {
		if (a[row][col] == key) {
			cout << "element found at " << endl;
			cout << "row " << row + 1 << endl;
			cout << "col " << col + 1 << endl;
			return ;
		}
		else if (a[row][col] > key) {
			col--;
		}
		else {
			row++;
		}

	}
	cout << "element not found" << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n, m;
	cin >> n >> m;
	int key; cin >> key;
	int a[10][10];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	staircase_print(a, n, m, key);

	return 0;
}

