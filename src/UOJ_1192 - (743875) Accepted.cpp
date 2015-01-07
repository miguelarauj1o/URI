#include <iostream>
using namespace std;

int main()
{
	int n, a_i, c_i, res;
	char a, b, c;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a >> b >> c;
		cin.ignore();

		a_i = a - '0';
		c_i = c - '0';

		if(a_i == c_i){
			res = a_i * c_i;
		}else{
			if(b >= 97 && b <= 122){
				res = a_i + c_i;
			}else{
				res = c_i - a_i;
			}
		}

		cout << res << endl;
	}

	return 0;
}