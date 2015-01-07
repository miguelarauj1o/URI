#include <iostream>

using namespace std;

int main()
{
	int x, m, p;
	
	for(int i = 1; i <= 10; ++i)
	{
		cin >> x;
		
		if(x > m){
			m = x;
			p = i;
		}
	}
	
	cout << m << endl << p << endl;
	
	return 0;
}