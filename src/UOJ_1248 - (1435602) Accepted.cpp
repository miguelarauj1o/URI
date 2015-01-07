#include <iostream>
#include <cstring>

using namespace std;

int arr[26];

int main(int argc, char const *argv[])
{
	int n, size, i;
	string d, b, l;
	bool p;

	cin >> n; cin.ignore();

	while(n--)
	{
		p = false;
		memset(arr, 0, sizeof arr);
		getline(cin, d); getline(cin, b); getline(cin, l);

		size = d.length();
		for (i = 0; i < size; ++i)
			arr[(d[i] - 65)]++;

		size = b.length();
		for (i = 0; i < size; ++i)
			arr[(b[i] - 65)]--;

		size = l.length();
		for (i = 0; i < size; ++i)
			arr[(l[i] - 65)]--;

		for (i = 0; i < 26; ++i)
		{
			if(arr[i] < 0)
				p = true;
		}

		if(p) printf("CHEATER");
		else{
			for (i = 0; i < 26; ++i)
				if(arr[i] > 0)
					printf("%c", i + 65);
		}

		printf("\n");
	}

	return 0;
}