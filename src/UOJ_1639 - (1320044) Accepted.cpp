#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, count;
	
	while(cin >> n && n)
	{
		bool visi[1000000];
		memset(visi, false, sizeof(visi));
		count = 0;

		while(!visi[n])
		{
			visi[n] = true;
			n *= n;
			n /= 100;
			n %= 10000;
			count++;
		}

		cout << count << endl;
	}
	return 0;
}