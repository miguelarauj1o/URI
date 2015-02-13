#include <iostream>
#include <cstring>
#include <algorithm>

#define FOR(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef struct 
{
	string nome, cor, tam;
}aluno;

aluno arr[61];

bool cmp(aluno a, aluno b)
{
	if(a.cor == b.cor){
		if(a.tam == b.tam) return a.nome < b.nome;
		else return a.tam > b.tam;
	}else{
		return a.cor < b.cor;
	}
}

int main(int argc, char const *argv[])
{
	int n;
	string s;

	cin >> n;

	while(n)
	{
		cin.ignore();

		FOR(i, n)
		{
			getline(cin, arr[i].nome); 
			cin >> arr[i].cor >> arr[i].tam;
			cin.ignore();
		}

		stable_sort(arr, arr + n, cmp);

		FOR(i, n)
			cout << arr[i].cor << " " << arr[i].tam << " " << arr[i].nome << '\n';

		cin >> n;
		if(n != 0)
			cout << '\n';
	}

	return 0;
}