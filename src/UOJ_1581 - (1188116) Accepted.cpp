#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n, k;
	string s, tmp;
	bool check;

	cin >> n; cin.ignore();

	for (int i = 0; i < n; ++i)
	{
		cin >> k; cin.ignore();
		check = false;

		for (int j = 0; j < k; ++j)
		{
			getline(cin, s);
			if(j == 0)
				tmp = s;

			if(tmp != s)
				check = true;
		}

		if(check){
			cout << "ingles" << '\n';
		}else{
			cout << s << '\n';
		}
	}

	return 0;
}