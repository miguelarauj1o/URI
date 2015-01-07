#include <iostream>

using namespace std;

int mdc(int a, int b)
{
	if(b == 0) return a;
	else return mdc(b, a % b);
}

int main(int argc, char const *argv[])
{
	int n, a, b, t;

	while(cin >> n >> a >> b && (n || a || b))
	{
		t = (n/a) + (n/b) - (n/((a * b)/mdc(a, b)));
		cout << t << endl;
	}

	return 0;
}