#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, r, x;
	bool ver;

	while(cin >> n >> r)
	{
		vector<int> v(n + 1);
		ver = false;

		for (int i = 0; i < r; ++i)
		{
			cin >> x;
			v[x] = 1;
		}

		for (int i = 1; i <= n; ++i)
		{
			if(v[i] == 0){
				ver = true;
				cout << i << " ";
			}
		}

		if(ver == false)
			cout << '*'; 

		cout << endl;
	}

	return 0;
}