#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int n, s, a, b, x, y, z;
	double st, at, bt, xt, yt, zt;
	string str;

	cin >> n;
	st = at = bt = xt = yt = zt = 0;
	while(n--) {
		cin >> str >> s >> a >> b >> x >> y >> z;
		st += s, at += a, bt += b, xt += x, yt += y, zt += z;
	}
	
	cout << fixed;
	cout << setprecision(2);
	cout << "Pontos de Saque: " << (100 * xt)/st << " %." << endl;
	cout << "Pontos de Bloqueio: " << (100 * yt)/at << " %." << endl;
	cout << "Pontos de Ataque: " << (100 * zt)/bt << " %." << endl;
	
	return 0;
}