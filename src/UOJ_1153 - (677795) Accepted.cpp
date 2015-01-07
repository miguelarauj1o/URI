#include <iostream>

using namespace std;

int main()
{
	int n, fat = 1;

	cin >> n;
	while(n != 1)
	{
		fat *= n;
		n--;
	}

	cout << fat << endl;

	return 0;
}