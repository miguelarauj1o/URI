#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	int size, count; 
	char c; 
	bool b, f = true, tmp; 
	string s;

	while(getline(cin,s))
	{
		size = s.length();
		count = 0; b = true; tmp = true;

		for (int i = 0; i < size; ++i)
		{
			if(f) c = tolower(s[i]);
			f = false;

			if(s[i] != ' '){
				if(b){
					if(s[i] == c && i != 0){
						if(tmp)
							count++;
						tmp = false;
					}else{
						c = tolower(s[i]);
						tmp = true;
					}
				}
				b = false;
			}else{
				b = true;	
			}
		}
		printf("%i\n", count);
	}
	return 0;
}