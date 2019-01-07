#include <iostream>

using namespace std;
int main(int argc, char *argv[]) {
	int q, c, x;
	
	cin >> q >> c;
	bool offices[10001] = {false};
	
	while(c--) {
		cin >> x;
		offices[x] = true;
	}
	
	while(q--) {
		cin >> x;
		
		if(offices[x]) {
			cout << "0" << endl;
		} else {
			cout << "1" << endl;
			offices[x] = true;
		}
	}
}