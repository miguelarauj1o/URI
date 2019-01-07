#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
	string d, s;
	while (cin >> d >> s)
		(d.find(s) != string::npos) ? puts("Resistente"): puts("Nao resistente");
}