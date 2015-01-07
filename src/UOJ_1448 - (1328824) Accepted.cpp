#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, size, i, ac, bc, x = 1, tmp;
	string a, b, o;
	bool bo;
	cin >> n; cin.ignore();

	while(n--)
	{
		getline(cin, o); getline(cin, a); getline(cin, b);
		size = o.length();
		ac = 0; bc = 0; tmp = 2; bo = true;

		for (int i = 0; i < size; ++i)
		{
			if(o[i] == a[i]) ac++;
			else{
				if(bo && o[i] == b[i]){
					tmp = 1;
					bo = false;
				} 
			}

			if(o[i] == b[i]) bc++;
			else{
				if(bo && o[i] == a[i]){
					tmp = 0;
					bo = false;
				} 
			}
		}

		cout << "Instancia " << x << endl; x++;

		if(ac > bc) cout << "time 1" << endl;
		else if(ac < bc) cout << "time 2" << endl;
		else{
			if(tmp == 0) cout << "time 1" << endl;
			else if (tmp == 1) cout << "time 2" << endl;
			else cout << "empate" << endl;
		}

		cout << endl;
	}

	return 0;
}