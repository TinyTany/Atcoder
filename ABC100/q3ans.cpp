#include <iostream>
using namespace std;
 
int n, a[10009], sum;
 
int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		while (a[i] % 2 == 0) { a[i] /= 2; sum++; }
	}
	cout << sum << endl;
	return 0;
}