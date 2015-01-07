#include <iostream>
#include <vector>

using namespace std;

int main()
{
	double n;
	vector<double> v;

	cin >> n;

	for (int i = 0; i < 100; ++i)
	{
		v.push_back(n);
		n /= 2;
	}

	for (int i = 0; i < 100; ++i)
	{
		cout.precision(4);
		cout << "N[" << i << "] = " << fixed << v[i] << endl;
	}

	return 0;
}