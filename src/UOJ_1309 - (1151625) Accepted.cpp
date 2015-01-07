#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int size_s1, size_s2;
	string s1, s2;

	while(getline(cin, s1) && getline(cin, s2))
	{
		size_s1 = s1.size(); size_s2 = s2.size();

		printf("$");
		for (int i = 0; i < size_s1; ++i)
		{
			if((size_s1 - i) % 3 == 0 && i > 0)
				printf(",");
			printf("%c", s1[i]);
		}
			
		printf(".");
		if(size_s2 < 2)
			printf("0");
		for (int i = 0; i < size_s2; ++i)
			printf("%c", s2[i]);
		printf("\n");
	}

	return 0;
}