#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	string s, a, b, c;
	int _a, _b, _c;
	size_t p;

	while(getline(cin,s))
	{
		p = s.find('+');
		a = s.substr(0, p); b = s.substr(p + 1);
		p = b.find('=');
		c = b.substr(p + 1); b = b.substr(0, p);

		std::reverse(std::begin(a), std::end(a)); _a = stoi(a);
		std::reverse(std::begin(b), std::end(b)); _b = stoi(b);
		std::reverse(std::begin(c), std::end(c)); _c = stoi(c);

		if(_a + _b == _c) puts("True");
		else puts("False");
	}

	return 0;
}