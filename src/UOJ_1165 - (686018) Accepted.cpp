#include <iostream>

using namespace std;

int main()
{
	int n, x, t;
	bool ver;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> x;
		t = 2;
		ver = false;

		while(ver == false && t < x)
		{
			if(x % t == 0){
				ver = true;
			}
			t++;
		}

		if(ver == false || x == 1){
			cout << x <<" eh primo" << endl;
		}else{
			cout << x <<" nao eh primo" << endl;	
		}

	}

	return 0;
}