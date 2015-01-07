#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float x = -1, y = -1;

	do{
		cin >> x;
		if(x < 0 || x > 10)
			cout << "nota invalida" << endl;

	}while(x < 0 || x > 10);

	do{
		cin >> y;
		if(y < 0 || y > 10)
			cout << "nota invalida" << endl;

	}while(y < 0 || y > 10);

	cout << "media = " << fixed << setprecision(2) << ((x + y) / 2)	<< endl;

	return 0;
}