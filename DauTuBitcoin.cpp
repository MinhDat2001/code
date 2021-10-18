#include<iostream>
using namespace std;
int main(void) {
	int n, arr[100000];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	int max1 = arr[0], res = 0;
	for (int i = 1; i < n; i++) {
		max1 = max(max1, arr[i - 1]);
		res = max(res, max1 - arr[i]);
	}
	if (res > 0)
		cout << res << endl;
	else
		cout << "Lo nang roi!" << endl;
}