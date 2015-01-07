#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main()
{
	double counter = 0, tmp = 0, res, x;
	string trash;
	char c;

	while(getline(cin,trash))
	{
		cin >> x;
		c = getchar();
		tmp += x;
		counter++;
	}

	res = tmp / counter;

	cout << fixed << setprecision(1) << res << endl;

	return 0;
}