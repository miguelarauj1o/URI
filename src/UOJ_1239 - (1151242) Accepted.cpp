#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int size;
	string s;
	bool u, a;

	while(getline(cin, s))
	{
		size = s.size();
		u = false; a = false;

		for (int i = 0; i < size; ++i)
		{
			if(s[i] == '_' && u == false){
				printf("<i>");
				u = true;
			}else if(s[i] == '_' && u == true){
				printf("</i>");
				u = false;
			}else if(s[i] == '*' && a == false){
				printf("<b>");
				a = true;
			}else if(s[i] == '*' && a == true){
				printf("</b>");
				a = false;
			}else{
				printf("%c", s[i]);
			}
		}
		printf("\n");
	}

	return 0;
}