#include <iostream>
using namespace std;

int main(void) {
	int n;
	cin >> n;
	
	int arr[n];
	arr[0] = arr[1] = 1;
	
	for (int i = 2; i < n; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	
	for (int i = n - 1; i >= 0; i--) {
		cout << arr[i];
		if (i - 1 >= 0)
			cout << " ";
	}
	cout << endl;

	return 0;
}