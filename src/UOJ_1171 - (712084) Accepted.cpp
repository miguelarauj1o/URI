#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, x, counter = 0;
	int array [2001];
	int array_copy [2001];

	fill(array, array + 2001, 0);
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		array[x] += 1;
	}

	for (int i = 0; i < 2001; ++i)
	{
		if(array[i] != 0){
			cout << i << " aparece " << array[i] << " vez(es)" << endl;
		}
	}
	return 0;
}