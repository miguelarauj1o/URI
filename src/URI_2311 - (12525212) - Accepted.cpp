#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main() {
	int n;
	double sum, dif, list[7], highest, lowest;
	string name;
	
	cin >> n;
	while(n--) {
		cin >> name >> dif;
		sum = 0.0; highest = -1.0; lowest = 11.0;
		for(int i = 0; i < 7; i++) {
			cin >> list[i];
			sum += list[i];
			
			if (list[i] > highest) {
				highest = list[i];
			}
			
			if (list[i] < lowest) {
				lowest = list[i];
			}
		}

		sum -= (highest + lowest);
		cout << fixed;
		cout << setprecision(2);
		cout << name << " " << sum * dif << endl;
	}
}