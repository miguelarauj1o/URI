#include <iostream>
#include <iomanip>
#include <cstring>
#include <map>
using namespace std;

int main()
{
	int n, m;
	float q, sumAll, tmp;
	string s, nome, qtd;
	size_t pos;

	cin >> n; cin.ignore();

	while(n--)
	{
		map<string, float> map;
		sumAll = 0;
		cin >> m; cin.ignore();
		
		while(m--)
		{
			getline(cin, s);
			size_t pos = s.find(' ');
			nome = s.substr(0, pos);
			qtd = s.substr(pos); 
			q = atof(qtd.c_str());
			map.insert(pair<string,float>(nome,q));
		}

		cin >> m; cin.ignore();

		while(m--)
		{
			getline(cin, s);
			size_t pos = s.find(' ');
			nome = s.substr(0, pos);
			qtd = s.substr(pos);
			q = atof(qtd.c_str());
			tmp = map[nome];
			sumAll += (q * tmp);
		}

		cout << "R$ " << fixed << setprecision(2) << sumAll << '\n';
	}

	return 0;
}