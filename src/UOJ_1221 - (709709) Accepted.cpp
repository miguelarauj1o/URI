#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n, x;
	bool ver = false;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> x;

		if(x == 2){
			cout << "Prime" << endl;
		}else{

			if(x % 2 == 0){
				cout << "Not Prime" << endl;
			}else{

				for (int j = 3; j < sqrt(x); j += 2)
				{
					if(x % j == 0)
						ver = true;
				}

				if(ver == true){
					cout << "Not Prime" << endl;		
				}else{
					cout << "Prime" << endl;	
				}
			}
		}

		ver = false;
	}

	return 0;
}