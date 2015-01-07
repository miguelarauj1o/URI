#include <iostream>
using namespace std;

long r(int x, int y)
{
	return ((3 * x) * (3 * x)) + (y * y);
}

long b(int x, int y)
{
	return (2 * (x * x)) + ((5 * y) * (5 * y));
}

long c(int x, int y)
{
	return (-100 * x) + (y * y * y);
}

int main()
{
	int n, x, y;
	long rafael, beto, carlos;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> x >> y;
		
		rafael = r(x,y);
		beto = b(x,y);
		carlos = c(x,y);

		if(rafael > beto && rafael > carlos){
			cout << "Rafael ganhou" << endl;
		}else if(beto > rafael && beto > carlos){
			cout << "Beto ganhou" << endl;
		}else{
			cout << "Carlos ganhou" << endl;
		}


	}	

	return 0;
}
