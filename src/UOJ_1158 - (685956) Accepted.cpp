#include <iostream>

using namespace std;

int main()
{
	int n, x, y, tmp;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		tmp = 0;
		cin >> x >> y;

		if(x % 2 == 0){

			x++;

			for (int i = 0; i < y; ++i)
			{
				tmp += x;
				x += 2;
			}
		}else{

			for (int i = 0; i < y; ++i)
			{
				tmp += x;
				x += 2;
			}

		}

		cout << tmp << endl;
	}

	return 0;
}