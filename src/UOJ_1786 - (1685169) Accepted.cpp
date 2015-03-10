#include <iostream>
#include <cstring>

#define for(i, n) for(int i = 0; i < (n); ++i)
   
using namespace std;
   
int main(int argc, char const *argv[])
{
	int b1, b2, l, r;
	string s;
   
	while(getline(cin, s))
	{
		l = 1, r = 9, b1 = b2 = 0;

		for(i, 9)
		{
			b1 += (l * (s[i] - '0'));
			b2 += (r * (s[i] - '0'));
			l++; r--;
		}

		if(b1 % 11 == 10) b1 = 0;
		else b1 %= 11;
		if(b2 % 11 == 10) b2 = 0;
		else b2 %= 11;

		cout << s[0] << s[1] << s[2] << "." << s[3] << s[4] << s[5] << "." << s[6] << s[7] << s[8] << "-" << b1 << b2 << endl;
	}
   
	return 0;
}