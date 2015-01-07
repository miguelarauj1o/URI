#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n, size;
	string s;
	bool b, l;

	scanf("%i", &n);
	cin.ignore();

	while(n--)
	{
		getline(cin, s);
		size = s.size();
		b = false; l = false;
		
		for (int i = 0; i < size; ++i)
		{
			if(s[i] == ' '){
				b = true;
				l = false;
			}else{
				b = false;
				if(l == false){
					printf("%c", s[i]);
					l = true;	
				}
			}
		}
		printf("\n");
	}

	return 0;
}