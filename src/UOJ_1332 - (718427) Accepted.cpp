#include <iostream>
using namespace std;

int main()
{
	int n;
	string name;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> name;

		if(name.length() == 5){
			cout << "3" << endl;
		}else{
			if((name.at(0) == 'o' && name.at(1) == 'n') || 
				(name.at(0) == 'o' && name.at(2) == 'e') ||
				(name.at(1) == 'n' && name.at(2) == 'e')){
				cout << "1" << endl;
			}else{
				cout << "2" << endl;
			}
		}
	}

	return 0;
}