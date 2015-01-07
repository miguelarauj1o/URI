#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, a, t, min;
	string p, tmp;

	while(cin >> n && n)
	{
		min = 10000000;

		for (int i = 0; i < n; ++i)
		{
			cin >> p >> a >> t;
			if((a - t) < min){
				min = (a - t);
				tmp = p;
			}
		}

		cout << tmp << '\n';
	}
	return 0;
}