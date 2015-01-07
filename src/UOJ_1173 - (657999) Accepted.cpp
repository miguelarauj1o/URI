#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int n;
	vector<int> v;

	cin >> n;

	for (int i = 0; i < 10; ++i)
	{
		v.push_back(n);
		n += n;
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << "N[" << i << "] = " << v[i] << endl;
	}

	return 0;
}