#include <iostream>
using namespace std;

int main()
{
	int i, g, x;
	int ctr = 0, inter = 0, gremio = 0, empate = 0;

	do{

		cin >> i >> g;
		ctr++;
		if(i > g){
			inter++;
		}else if (i == g){
			empate++;
		}else{
			gremio++;
		}

		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> x;

	}while(x == 1);

	cout << ctr << " grenais" << endl;
	cout << "Inter:" << inter << endl;
	cout << "Gremio:" << gremio << endl;
	cout << "Empates:" << empate << endl;
	
	if(inter > gremio){
		cout << "Inter venceu mais" << endl;
	}else{
		cout << "Gremio venceu mais" << endl;
	}

	return 0;
}