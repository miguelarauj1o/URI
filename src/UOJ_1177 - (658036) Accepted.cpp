#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int t, tmp = 0;
	vector<int> v;

	cin >> t;

	for (int i = 0; i < 1000; ++i)
	{
		v.push_back(tmp);
		tmp++;
		if(tmp == t)
			tmp = 0;
	}

	for (int i = 0; i < 1000; ++i)
	{
		cout << "N[" << i << "] = " << v[i] << endl;
	}

	return 0;

}