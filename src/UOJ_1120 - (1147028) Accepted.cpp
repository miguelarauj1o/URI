#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
	int n, tmp;
	char d;
	string s;

	while(getline(cin, s))
	{
		if(s.compare("0 0") == 0)
			return 0;

		d = s[0];
		s.erase (0,2);
		tmp = s.size();
		s.erase(remove(s.begin(), s.begin() + tmp, d), s.end());

		while(s[0] == '0')
		{
			if(s.size() == 1)
				break;

			s.erase (0,1);
		}

		if(s.size() == 0){
			cout << 0 << '\n';
		}else{
			cout << s << '\n';
		}
	}

	return 0;
}