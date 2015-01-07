#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
 
using namespace std;
 
bool checkInvalidChar(string s)
{
	int sz = s.length();
	 
	for(int i = 0; i < sz; i++)
		if(s[i] < 48 || s[i] > 57)
			return true;
			 
	return false;
}
 
bool onlyZeros(string s)
{
	int sz = s.length();
	 
	for(int i = 0; i < sz; i++)
		if(s[i] != 48)
			return false;
	 
	return true;
}
 
string removeLeftZeros(string s)
{
	int sz = s.length();
	string r;
	 
	for(int i = 0; i < sz; i++)
	{
		if(s[i] != '0'){
			r = s.substr(i);
			break;
		}
	}
	 
	return r;
}

bool overflow(string s)
{
	char c[1024];
	strcpy(c, s.c_str());

	long long int lli;
	lli = atoll(c);

	if(lli > 2147483647) return true;
	else return false;
}

int main(int argc, char const *argv[])
{
	bool c, o, v;
	string str;
	 
	while(getline(cin,str))
	{
		std::replace( str.begin(), str.end(), 'o', '0');
		std::replace( str.begin(), str.end(), 'O', '0');
		std::replace( str.begin(), str.end(), 'l', '1');
		str.erase(std::remove(str.begin(), str.end(), ','), str.end());
		str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
		
		c = checkInvalidChar(str);
		o = onlyZeros(str);
		v = overflow(str);

		if(c || v || str.length() < 1) cout << "error" << endl;
		else if (o) cout << "0" << endl;
		else cout << removeLeftZeros(str) << endl;
	}
	 
	return 0;
}