#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char c;
	float x, tmp = 0;

	float matrix[12][12];

	cin >> c;

	for (int i = 0; i < 12; ++i)
	{
		for (int j = 0; j < 12; ++j)
		{
			cin >> x;
			matrix[i][j] = x;
		}
	}

	for (int i = 0; i < 12; ++i)
	{
		for (int j = 0; j < 12; ++j)
		{
			if(j > i){
				tmp += matrix[i][j];
			}
		}
	}

	if(c == 'S'){
		cout << fixed << setprecision(1) << tmp << endl;
	}else{
		cout << fixed << setprecision(1) << tmp/66 << endl;
	}

	return 0;
}