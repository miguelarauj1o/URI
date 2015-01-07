#include <iostream>

using namespace std;

int main()
{
	long long x, y;

	while(cin >> x >> y)
	{
		if(x < y){
			cout << y - x << endl;
		}else{
			cout << x - y << endl;
		}
	}

	return 0;
}