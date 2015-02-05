#include <iostream>
#include <cstring>
  
using namespace std;
  
int main(int argc, char const *argv[])
{
	int l, r, _l, _r;
	bool b1, b2, b3, b4;
	string s;
  
	while(getline(cin, s))
	{
		b1 = b2 = b3 = b4 = false;
		l = 1;
		r = 9;
		_l = _r = 0;
  
		for (int i = 0; i < 11; ++i)
		{
			if(i != 3 && i != 7){
				_l += (l * (s[i] - '0'));
				_r += (r * (s[i] - '0'));
				l++; r--;
			}
		}
  
		if(((s[12] - '0') == (_l % 11)) && ((s[13] - '0') == (_r % 11))) 
			b1 = true;

		if(((s[12] - '0') == (_l % 11)) && ((s[13] - '0' == 0 && _r % 11 == 10))) 
			b2 = true;

		if(((s[13] - '0') == (_r % 11)) && ((s[12] - '0' == 0 && _l % 11 == 10))) 
			b3 = true;

		if(((s[12] - '0' == 0 && _l % 11 == 10)) && ((s[13] - '0' == 0 && _r % 11 == 10))) 
			b4 = true;
 
		if(b1 || b2 || b3 || b4) puts("CPF valido");
		else puts("CPF invalido");
	}
  
	return 0;
}