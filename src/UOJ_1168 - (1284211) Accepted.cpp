#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	int x, tmp, size;
	string s;
	cin >> x;

	for (int i = 0; i < x; ++i)
	{
		tmp = 0;
		cin >> s;
		size = s.length();

		for (int j = 0; j < size; ++j)
		{
			if(s[j] == '0' || s[j] == '9' || s[j] == '6'){
				tmp += 6;
			}else if(s[j] == '1'){
				tmp += 2;
			}else if(s[j] == '2' || s[j] == '3' || s[j] == '5'){
				tmp += 5;
			}else if(s[j] == '4'){
				tmp += 4;
			}else if(s[j] == '7'){
				tmp += 3;
			}else{
				tmp += 7;
			}
		}

		cout << tmp << " leds" << endl;
	}
	return 0;
}