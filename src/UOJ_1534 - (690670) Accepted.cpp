#include <iostream>

using namespace std;

int main()
{
	int n;

	while(cin >> n)
	{
		int a = 0, b = (n - 1);
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if(j == b && i == a){
					cout << 2;
				}else if (i == j){
					cout << 1;
				}else{
					cout << 3;
				}
			}
			a++;
			b--;
			cout << endl;
		}
	}

	return 0;
}