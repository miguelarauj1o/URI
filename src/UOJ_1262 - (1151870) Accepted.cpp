#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	string s;
	int p, size, ciclos, count;

	while(cin >> s >> p)
	{
		size = s.size();
		ciclos = 0; count = 0;

		for (int i = 0; i < size; ++i)
		{
			if(s[i] == 'R'){
				if(count == 0)
					ciclos++;

				count++;
				if(count == p)
					count = 0;
			}else{
				ciclos++;
				count = 0;
			}
		}

		printf("%i\n", ciclos);
	}

	return 0;
}