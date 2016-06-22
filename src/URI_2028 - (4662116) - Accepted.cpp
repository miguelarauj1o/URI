#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int n, cnt = 0;
	
	while (cin >> n) {
		cnt++;
		
		if(n == 0) {
			printf("Caso %d: 1 numero\n", cnt);
			cout << 0 << endl << endl;
			continue;
		}

		printf("Caso %d: %d numeros\n",cnt, ((n * (1 + n)) / 2) + 1);
		cout << 0;
		for (int i = 0; i <= n; ++i) {
			for (int j = 0; j < i; j++) {
				cout << i;
				if (j != i - 1)
					cout << " ";
			}

			if (i != n)
				cout << " ";
		}

		printf("\n\n");
	}

	return 0;
}#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int n, cnt = 0;
	
	while (cin >> n) {
		cnt++;
		
		if(n == 0) {
			printf("Caso %d: 1 numero\n", cnt);
			cout << 0 << endl << endl;
			continue;
		}

		printf("Caso %d: %d numeros\n",cnt, ((n * (1 + n)) / 2) + 1);
		cout << 0;
		for (int i = 0; i <= n; ++i) {
			for (int j = 0; j < i; j++) {
				cout << i;
				if (j != i - 1)
					cout << " ";
			}

			if (i != n)
				cout << " ";
		}

		printf("\n\n");
	}

	return 0;
}