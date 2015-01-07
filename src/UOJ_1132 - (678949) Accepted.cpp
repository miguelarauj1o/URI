#include <iostream>

using namespace std;

int main()
{
	int x, y, min, max;
	int tmp = 0;

	cin >> x >> y;

	if(x < y){
		min = x;
		max = y;
	}else{
		min = y;
		max = x;
	}

	for (int i = min; i <= max; ++i)
	{
		if(i % 13 != 0)
			tmp += i;
	}

	cout << tmp << endl;

	return 0;
}