#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int const &a, int const &b) {
	return a > b;
}

int main() {
	int n, k;
	
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
		
	sort(arr, arr + sizeof(arr) / sizeof(arr[0]), cmp);
	while (k < n && arr[k] == arr[k-1])
		k++;
	
	cout << k << endl;
	return 0;
}