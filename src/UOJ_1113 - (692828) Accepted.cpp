#include <iostream>

using namespace std;

int main()
{
	int x, y;

	while(cin >> x >> y)
	{
		if(x == y)
			return 0;

		if(x > y){
			cout << "Decrescente" << endl;
		}else{
			cout << "Crescente" << endl;
		}
	}
}