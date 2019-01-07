#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int n, i, count = 0;
	string bag[151] = {""}, s;
	bool flag;
	
	cin >> n;
	while (n--) {
		cin >> s;
		flag = false;
		
		for (i = 0; i < count; i++)
			if (s == bag[i])
				flag = true;
				
		if (!flag) {
			bag[count] = s;
			count++;
		}
	}
	
	cout << "Falta(m) " << 151 - count << " pomekon(s)." << endl;
	return 0;
}