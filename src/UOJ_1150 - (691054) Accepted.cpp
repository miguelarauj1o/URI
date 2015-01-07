#include <iostream>

using namespace std;

int main()
{
	int x, z;
	int ctr = 0, tmp = 0;

	cin >> x >> z;

	while(z <= x)
	{
		cin >> z;
	}
	
	while(tmp <= z)
	{
		tmp += x;
		x++;
		ctr++; 
	}
	cout << ctr << endl;

	return 0;
}