#include <iostream>
using namespace std;

int main()
{
	int n, counter;
	float food;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> food;
		counter = 0;

		while(food > 1)
		{
			counter++;
			food = food/2;
		}

		cout << counter << " dias" << endl;
	}

	return 0;
}