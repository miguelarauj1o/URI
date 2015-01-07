#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
	int n, size, max;
	string s;
	char c;

	scanf("%i", &n);
	cin.ignore();

	while(n--)
	{
		int alfa[26];
		getline(cin, s);
		transform (s.begin(), s.end(), s.begin(), ::tolower);
		memset(alfa, 0, sizeof alfa);
		size = s.size(); 
		max = 0;

		for (int i = 0; i < size; ++i)
		{
			if((s[i] - 97) >= 0 && (s[i] - 97) <= 26)
				alfa[s[i] - 97]++;
		}

		for (int i = 0; i < 26; ++i)
		{
			if(max < alfa[i])
				max = alfa[i];
		}

		for (int i = 0; i < 26; ++i)
		{
			if(alfa[i] == max){
				c = i + 97;
				printf("%c", c);
			}
		}
		printf("\n");

	}

	return 0;
}