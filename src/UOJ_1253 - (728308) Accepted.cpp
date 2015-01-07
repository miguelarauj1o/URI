#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n, x, tmp;
	string c;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> c >> x;

		for (int i = 0; i < c.size(); ++i)
		{
			if(c[i] - x < 65){
				tmp = c[i] - 64;
				putchar(90 - (x - tmp));
			}else{
				putchar(c[i] - x);
			}
		}

		cout << endl;
	}

	return 0;
}
