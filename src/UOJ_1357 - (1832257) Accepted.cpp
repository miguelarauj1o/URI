#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

#define sc1(a) scanf("%d", &a)
#define fr(i,a,n) for(int i = (a); i < (n); i++)

int sz;
string input;
char b[3][310];
char braille[10][6] = { {'.','*','*','*','.','.'}, {'*','.','.','.','.','.'}, {'*','.','*','.','.','.'}, {'*','*','.','.','.','.'}, {'*','*','.','*','.','.'}, {'*','.','.','*','.','.'}, {'*','*','*','.','.','.'}, {'*','*','*','*','.','.'}, {'*','.','*','*','.','.'}, {'.','*','*','.','.','.'}};

void decToBra(int d);
void braToDec(int d);

int main(int argc, char const *argv[])
{
	int d;
	char c;

	while (sc1(d) && d) 
	{
		cin >> c;
		getchar();

		if (c == 'S') decToBra(d);
		else braToDec(d);
	}

	return 0;
}

void decToBra(int d) 
{
	getline(cin, input);
	sz = input.length();

	fr(i, 0, 3)
	{
		fr(j, 0, sz)
		{
			if (j > 0) 
				cout << " ";
			cout << braille[input[j]-'0'][2*i] << braille[input[j]-'0'][2*i+1];
		}

		printf("\n");
	}
}

void braToDec(int d)
{
	fr(i, 0, 3)
	{
		getline(cin, input);
		sz = input.length();
		
		for (int j = 0; j < sz; j += 3)
			b[i][j*2/3] = input[j], b[i][j*2/3+1] = input[j+1];
	}

	fr(i, 0, d)
	{
		fr(j, 0, 10)
		{
			if (braille[j][0] == b[0][i*2] && braille[j][1] == b[0][i*2+1] && braille[j][2] == b[1][i*2] && braille[j][3] == b[1][i*2+1] && braille[j][4] == b[2][i*2] && braille[j][5] == b[2][i*2+1]) {
				cout << j;
				break;
			}
		}
	}

	printf("\n");
}