#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, i, size, r;
	string s;
	cin >> n; cin.ignore();

	while(n--)
	{
		getline(cin, s);
		int sigma[26];
		memset(sigma, 0, sizeof(sigma));
		size = s.length();
		r = 0;

		for (i = 0; i < size; ++i)
		{
			if(s[i] > 96 && s[i] < 123){
				if(sigma[(int)s[i] - 97] == 0){
					sigma[(int)s[i] - 97]++;
					r++;
				}
			}
		}

		if(r == 26) cout << "frase completa" << endl;
		else{
			if(r > 13) cout << "frase quase completa" << endl;
			else cout << "frase mal elaborada" << endl;
		}

	}
	return 0;
}