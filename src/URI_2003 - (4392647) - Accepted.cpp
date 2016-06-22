#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int h, m, t;
  	char c;
  	
  	while(cin >> h >> c >> m) {
  		t = 60 * h + m;
  		if(t > 420) cout << "Atraso maximo: "<< t - 420 << endl;
		else cout << "Atraso maximo: " << 0 << endl;
  	}
	
	return 0;
}