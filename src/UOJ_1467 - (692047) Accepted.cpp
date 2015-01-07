#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	while(cin >> a >> b >> c)
	{
		if(a == b && b == c){
			cout << "*" << endl;
		}
		if(a != b && a != c && b == c){
			cout << "A" << endl;
		}
		if(b != a && b != c && a == c){
			cout << "B" << endl;
		}
		if(c != b && c != a && a == b){
			cout << "C" << endl;
		}
	}
	return 0;
}