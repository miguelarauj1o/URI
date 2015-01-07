#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
	int size;
	string s;
	char c;
	bool b, check;

	while(getline(cin, s))
	{
		if(s == "*")
			break;

		transform (s.begin(), s.end(), s.begin(), ::tolower);
		size = s.size();
		c = s[0];
		b = false; check = true;

		for (int i = 0; i < size; ++i)
		{
			if(s[i] != ' ' && b == false){
				if(s[i] != c){
					check = false;
				}
				
				b = true;
			}else{
				if(s[i] == ' ')
					b = false;
			}			
		}

		if(check){
			puts("Y");
		}else{
			puts("N");
		}
	}

	return 0;
}