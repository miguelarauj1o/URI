#include <iostream>

using namespace std;

int main()
{
	int n, tmp = 0;

	cin >> n;

	while(n != 0)
	{
		tmp = 0;

		if(n % 2 == 0){
			for (int i = 0; i < 5; ++i)
			{
				tmp += n;
				n += 2;
			}
		}else{
			n++;
			for (int i = 0; i < 5; ++i)
			{
				tmp += n;
				n += 2;
			}

		}

		cout << tmp << endl;

		cin >> n;
	}

	return 0;
}