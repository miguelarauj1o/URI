#include <iostream>
#include <cstring>
using namespace std;

int vol(string fruit) {
		if (!fruit.compare("suco de laranja")) {return 120;}
		else if (!fruit.compare("morango fresco")) {return 85;}
		else if (!fruit.compare("mamao")) {return 85;}
		else if (!fruit.compare("goiaba vermelha")) {return 70;}
		else if (!fruit.compare("manga")) {return 56;}
		else if (!fruit.compare("laranja")) {return 50;}
		else {return 34;} // brocolis
}

int main() {
	int t, q, v;
	string fr;
	
	while(cin >> t) {
		if (!t) break;
		v = 0;
		
		for (int i = 0; i < t; i++) {
			cin >> q;
				getline(cin, fr);
				fr.erase(0, 1);
				v += (q * vol(fr));
		}
		
		if (v < 110) {
				cout << "Mais " << 110 - v << " mg" << endl;
		} else if (v > 130) {
				cout << "Menos " << v - 130 << " mg" << endl;
		} else {
				cout << v << " mg" << endl;   
		}
	}
}
