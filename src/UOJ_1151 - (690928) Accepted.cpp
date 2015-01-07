#include <iostream>

using namespace std;

void fib(int n)
{
	int f = 0, g = 1, next = 1;

	if(n >= 1)
		cout << f << " ";
	if(n >= 2)
		cout << g << " ";

	for (int i = 0; i < (n - 2); ++i)
	{
		next = f + g;
		cout << next;
		if(i != (n - 3))
			cout << " ";
		f = g;
		g = next;
	}
	cout << endl;

}

int main()
{
	int n;

	cin >> n;
	fib(n);

	return 0;
}