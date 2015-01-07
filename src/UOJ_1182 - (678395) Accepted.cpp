#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int l;
	char c;
	float x, tmp = 0;

	float matrix[12][12];

	cin >> l >> c;

	for (int j = 0; j < 12; ++j)
	{
		for (int i = 0; i < 12; ++i)
		{
			cin >> x;
			matrix[j][i] = x;
		}
	}

	for (int j = 0; j < 12; ++j)
	{
		for (int i = l; i < (l + 1); ++i)
		{
			tmp += matrix[j][i];
		}
	}

	if(c == 'S'){
		cout << fixed << setprecision(1) << tmp << endl;
	}else{
		cout << fixed << setprecision(1) << tmp/12 << endl;
	}

	return 0;
}