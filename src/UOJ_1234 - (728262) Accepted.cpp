#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
	string line;
	int ch;

	while(getline(cin, line))
	{
		ch = 0;

		for (int i = 0; i < line.size(); ++i)
		{
			if(line[i] != ' '){
				if(ch == 0){
					ch = 1;
					putchar(toupper(line[i]));
				}else{
					ch = 0;
					putchar(tolower(line[i]));
				}	
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}