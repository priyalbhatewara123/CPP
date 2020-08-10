#include<bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//difference between integer array and character array
	int a1[] = {1, 2, 3, 4};
	cout << a1 << endl;

	char a2[4] = {'a', 'b', 'c', '\0'};
	cout << a2 << endl;

	char s[10];
	cin >> s;
	cout << s << endl;
	cout << sizeof(s);


	return 0;
}